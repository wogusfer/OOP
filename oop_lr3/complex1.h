#pragma once
#include <string>
using namespace std;

class complex
{
private:
	double r; // модуль комплексного числа
	double fi; // аргумент комплексного числа
	string str; // комплексное число в виде строки
public:
	complex(); 
	complex(string strr);
	complex(double a, double b);
	void output();
	friend complex operator *(complex& a, complex& b);
	friend complex operator /(complex& a, complex& b);
	bool operator ==(const complex b);
	bool operator !=(const complex b);
	string operator !();
	complex operator &();
};
