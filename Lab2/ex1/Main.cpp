#include "NumberList.h"
NumberList sir;
int main()
{
	sir.Init();
	sir.Add(9);
	sir.Add(8);
	sir.Add(5);
	sir.Add(7);
	sir.Add(3);
	sir.Sort();
	sir.Print();
	return 0;
}