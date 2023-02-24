#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<queue>
#include<string>
#include<cstring>
#include<map>
using namespace std;

bool Comparare(pair<string, int>& stanga, pair<string, int>& dreapta) {
	if (stanga.second != dreapta.second)
		return stanga.second < dreapta.second;
	else {
		return stanga.first.compare(dreapta.first) > 0;
	}
}

int main()
{
	string sir;
	ifstream fisier("input.txt");
	if (!fisier)
	{
		printf("error la deschiderea fisierului: input.txt");
		return 0;
	}
	if(!getline(fisier, sir))
	{
		printf("error la citirea din fisier: input.txt");
		return 0;
	}
	cout << sir<<'\n';
	for (int i = 0; i < sir.size(); i++)
		sir[i] = tolower(sir[i]);
	map<string, int> myMap;
	cout << sir << '\n';
	char* ptr = strtok(&sir[0], " .,!");
	while (ptr != NULL)
	{
	
		string s = (string)ptr;
		myMap[s]++;
		ptr = strtok(NULL, " ,\.,! ");
	}
	priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(&Comparare)> queue(Comparare);
	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) 
	{
		//cout << mapIterator->first<<' '<<mapIterator->second<<'\n';
		pair<string, int> p;
		p.first = mapIterator->first;
		p.second = mapIterator->second;
		queue.push(p);
	}
	while (!queue.empty()) {
		cout << queue.top().first << " => " << queue.top().second << "\n";
		queue.pop();
	}

}
