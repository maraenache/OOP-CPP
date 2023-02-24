#define CRT_SECURE_NO_WARNINGS
#pragma once
class Sort
{
    // add data members
    int* list;
    int nr;

public:
    // add constuctors
    Sort(int n, int mini, int maxi);
    Sort();
    Sort(int v[], int n);
    Sort(int nr,...);
    Sort(char s[50][50]);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
}