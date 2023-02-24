#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "student.h"
#include <cstring>
#include <iostream>

student a;
student b;
int main()
{
	a.setNume("Lala Ioana");//la comparare a.nume<b.nume=>-1
	b.setNume("Popescu Andrei");
	a.setMate(8);//la comparare a.mate>b.mate=>1
	b.setMate(7);
	a.setIst(9);//la comparare a.ist==b.ist=>0
	b.setIst(9);
	a.setEng(9);//la comparare a.eng<b.end=>-1
	b.setEng(10);
	std::cout << comparNume(a, b) << "\n";
	std::cout << comparMate(a, b) << "\n";
	std::cout << comparIst(a, b) << "\n";
	std::cout << comparEng(a, b) << "\n";
	std::cout << comparMedia(a, b) << "\n";
}
