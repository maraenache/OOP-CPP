#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
int transfSirNumar(char s[200])
{
    int nr = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] >= '0' && s[i] <= '9')
            nr = nr * 10 + (s[i] - '0');
    return nr;
}
char sir[200];
int main()
{
    int suma = 0;
    FILE* pFile;
    pFile = fopen("ini.txt", "r");
    if (pFile == NULL)//gol
    {
        cout << "nu se poate accesa fisierul";
        return 0;
    }
    while (fgets(sir, 200, pFile))
    {
        int numar = transfSirNumar(sir);
        suma += numar;
    }
    cout << suma << ' ';
    fclose(pFile);
    return 0;
}