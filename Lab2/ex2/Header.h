#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <cstring>
int comparNume(student x, student y)
{
	return strcmp(x.nume, y.nume);
}

int comparMate(student x, student y)
{
	if (x.notaMate > y.notaMate)
		return 1;
	if (x.notaMate < y.notaMate)
		return -1;
	else
		return 0;
}

int comparIst(student x, student y)
{
	if (x.notaIst > y.notaIst)
		return 1;
	if (x.notaIst < y.notaIst)
		return -1;
	else
		return 0;
}

int comparEng(student x, student y)
{
	if (x.notaEng > y.notaEng)
		return 1;
	if (x.notaEng < y.notaEng)
		return -1;
	else
		return 0;
}

int comparMedia(student x, student y)
{
	if (x.med(x.notaMate, x.notaIst, x.notaEng) > y.med(y.notaMate, y.notaIst, y.notaEng))
		return 1;
	if (x.med(x.notaMate, x.notaIst, x.notaEng) < y.med(y.notaMate, y.notaIst, y.notaEng))
		return -1;
	else
		return 0;
}
