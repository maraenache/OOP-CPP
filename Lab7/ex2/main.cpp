#include<iostream>
#include"vector.h"

int main()
{
	Vector<float> v1;
	v1.push(1.5f);
	v1.push(2.5f);
	v1.push(3.5f);
	v1.push(4.5f);
	v1.print();
	std::cout << v1.pop()<<'\n';
	v1.remove(3);
	v1.print();
	v1.insert(2, 5.5f);
	v1.print();
	std::cout<<v1.get(3)<<'\n';
	v1.set(0, 6.5f);
	v1.print();
	v1.sort(nullptr);
	v1.print();
	v1.sort(comparareD);
	v1.print();
	v1.sort(comparareC);
	v1.print();
	std::cout<<v1.firstIndexOf(3.5, nullptr)<<' ';
	std::cout<<v1.firstIndexOf(5.5, equal);

}