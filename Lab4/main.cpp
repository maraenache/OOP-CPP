#define CRT_SECURE_NO_WARNINGS
#include "sort.h"
#include <iostream>
int main() {
    Sort nr1(6, 1, 30);
    nr1.InsertSort();
    nr1.Print();
    Sort nr2;
    nr2.BubbleSort();
    nr2.Print();
    int v[] = { 12,45,54,66 };
    Sort nr3(v, 4);
    nr3.Print();
    char sir[] = "34,8,56";
    Sort nr4(sir);
    nr4.Print();
    return 0;
}