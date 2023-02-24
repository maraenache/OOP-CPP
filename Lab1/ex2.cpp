#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n;
char string[101], sir[101][101],* p;
int main() 
{
    scanf("%[^\n]s", string);
    p = strtok(string, " ");
    while (p != NULL) //construiesc vector de cuvinte din sirul introdus
    {
        strcpy(sir[n++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (strlen(sir[i]) < strlen(sir[j]))//compar sirurile dupa lungime
                swap(sir[i], sir[j]);
            else if (strlen(sir[i]) == strlen(sir[j]))//daca au ac lungime
                if (strcmp(sir[i], sir[j]) < 0)//le sortez alfabetic
                    swap(sir[i], sir[j]);
        }
    for (int i = 0; i < n; i++)
        printf("%s\n", sir[i]);
    return 0;
}