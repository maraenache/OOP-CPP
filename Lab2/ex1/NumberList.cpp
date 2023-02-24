#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include<iostream>
void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	count += 1;
	if (count >= 10)
		return false;
	else
		return true;
}
void NumberList::Sort()
{
	bool bun = 0;
	int aux = 0;
	do
	{
		bun = 1;
		for (int i = 0; i < count - 1; i++)
			if (this->numbers[i] > this->numbers[i + 1])
			{
				aux = this->numbers[i];
				this->numbers[i] = this->numbers[i + 1];
				this->numbers[i + 1] = aux;
				bun = 0;
			}
	} while (!bun);
}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		std::cout << this->numbers[i] << " ";
}