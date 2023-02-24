#pragma once
class student
{
	public:
		char nume[100];
		float notaMate;
		float notaIst;
		float notaEng;

	public:
		void init();
		void setNume(const char* nume);
		void setMate(float notaMate);
		void setIst(float notaIst);
		void setEng(float notaEng);
		const char* getNume() const;
		float getMate() const;
		float getIst() const;
		float getEng() const;
		float med(float notaMate, float notaIst, float notaEng);
};

