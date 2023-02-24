#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <cstring>

void student::init()
{
	this->notaMate= 0;
	this->notaIst = 0;
	this->notaEng = 0;
	this->nume[0] = '\0';
}

void student::setNume(const char* nume)
{
	strcpy(this->nume, nume);
}
const char* student::getNume() const
{
	return this->nume;
}

void student::setMate(float notaMate)
{
	this->notaMate = notaMate;
}
float student::getMate() const
{
	return this->notaMate;
}

void student::setIst(float notaIst)
{
	this->notaIst = notaIst;
}
float student::getIst() const
{
	return this->notaIst;
}

void student::setEng(float notaEng)
{
	this->notaEng = notaEng;
}
float student::getEng() const
{
	return this->notaEng;
}

float student::med(float nota1, float nota2, float nota3)
{
	return ((nota1 + nota2 + nota3) / 3);
}