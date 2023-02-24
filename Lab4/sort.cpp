#define CRT_SECURE_NO_WARNINGS
#include "sort.h"
#include <cstring>
#include <cstdlib>
Sort::Sort(int n, int maxi, int mini)
//random values within a specific interval (min, max).
{
	nr = n;
	list = new int[nr];
	for (int i = 0; i < n; i++)
	{
		//For instance, to generate numbers between 1 and 100, you can write int random = 1+ (rand() % 100)
		list[i] = mini + (rand() % maxi);
	}
}
Sort::Sort()//an initialization list
	:list(new int[7] {3, 55, 4, 3, 22, 2, 1})
{
	nr = 7;
}
Sort::Sort(int v[],int n )//create the list from an existing vector
{
	nr = n;
	list = new int[nr];
	for (int i = 0; i < nr; i++)
	{
		list[i] = v[i];
	}
}
Sort::Sort(int n, ...)//using variadic parameters (use va_args for this)
{
	va_list args;
	va_start(args, nr);
	nr = n;
	list = new int[n];
	for (int i = 0; i < nr; i++)
	{
		list[i] = va_arg(args, int);
	}
	va_end(args);

}
Sort::Sort(char* s[50])//create the list from a string (e.g. "10,40,100,5,70"
{
	char* p, numere[50][50]{};
	nr = 0;
	p = strtok(s, ",");
	while (p != nullptr)
	{
		strcpy(numere[nr++], p);
		p = strtok(nullptr, ",");
	}
	list = new int[nr];
	for (int i = 0; i < nr; i++)
	{
		list[i] = atoi(numere[i]);
	}

}

void Sort::InsertSort(bool ascendent)
{
	for (int i = 1; i < nr; i++) {
		int j = i - 1;
		int key = list[i];
		if (ascendent == true) {
			while (j >= 0 && list[j] > key) {
				list[j + 1] = list[j];
				j--;
			}
		}
		else {
			while (j >= 0 && list[j] < key) {
				list[j + 1] = list [j] ;
				j--;
			}
		}
		if (list[j + 1] != key)
			list[j + 1] = key;
	}
}

void Sort::BubbleSort(bool ascendent)
{
	int poz = nr - 1;
	while (poz > 0) {
		int n = poz - 1;
		poz = 0;
		for (int i = 0; i <= n; i++) {
			if (list[i] > list[i + 1] && ascendent == true) {
				list[i] ^= list[i + 1] ^= list[i] ^= list[i + 1];
				poz = i;
			}
			if (list[i] < list[i + 1] && ascendent == false) {
				list[i] ^= list[i + 1] ^= list[i] ^= list[i + 1];
				poz = i;
			}
		}
	}
}
int Sort::GetElementsCount()
{
	return this->count;
}
void Sort::Print()
{
	for (int i = 0; i < GetElementsCount(); i++)
		std::cout<< GetElementFromIndex(i);
	std::cout<<"\n";
}
int Sort::GetElementFromIndex(int index)
{
	return list[index];

}
