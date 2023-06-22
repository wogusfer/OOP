#include "complex1.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

complex::complex() { // конструктор по умолчанию
	r = 0;
	fi = 0;
}

complex::complex(string strr) { // конструктор с значением
	str = strr;
}

complex::complex(double a, double b) { // конструктор с значениями
	r = a;
	fi = b;
}

void complex::output() { // функция вывода комплексного числа в тригонометри-ческой форме
	cout << "z=" << r << "(cos(" << fi << ")+i*sin(" << fi << "))\n";
}

complex operator *(complex& a, complex& b) { // перегрузка опертора умножения
	complex c;
	c.r = a.r * b.r; // считаем модуль 
	c.fi = a.fi + b.fi; // коэффициент перед pi
	return c;
}

complex operator /(complex& a, complex& b) { // перегрузка оператора деления
	complex c;
	c.r = a.r / b.r; // считаем модуль
	c.fi = a.fi - b.fi; // коэффициент перед pi
	return c;
}

bool complex::operator ==(const complex b) // перегрузка оператора сравнения
{
	if (this->r == b.r && this->fi == b.fi) // сраниваем на равество модуль и аргумент
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool complex::operator !=(const complex b) // перегрузка оператора сравнения
{
	if (this->r == b.r && this->fi == b.fi) // сраниваем на равество модуль и аргумент
	{
		return false;
	}
	else
	{
		return true;
	}
}

string complex::operator !() // перегрузка оператора операции преобразования в строку
{
	ostringstream ost; // создаем переменную, которая преобразовывает числа в строку
	ost << "z=" << r << "(cos(" << fi << "*pi)+i*sin(" << fi << "*pi))";
	return ost.str(); // вывод чисел уже в формате string
}

complex complex::operator &() // перегрузка метода получения комплексного чис-ла из строки
{
	str = this->str; // присваиваем значение строки из объекта в функцию
	string a, m; // создаем переменные для посчёта символом каждого из чисел
	char skobka('('); 
	char konec('p');
	for (int i = 0; str[i]; i++) { // запускаем цикл чтения строки
		if (i == 2) { // z=... после = идёт модуль числа, поэтому с 3 сим-вола начинаем отсчёт
			while (str[i] != skobka) { // пока не встериться скобка // z=...(cos...
				m += str[i]; // присваиваем символ к переменной
				i++;
			}
		}
		if (str[i] == skobka) { // z=...(cos(...pi) // на данном этапе i это скобка перед косинусом
			i = i + 5; // здесь мы меняем i, и соответсвенно ее значение станет началом аргумента
			while (str[i] != konec) { // пока не встретится буква p
				a += str[i]; // присваиваем символ к переменной
				i++;
			};
			break;
		}
	}
	double mod = atof(m.c_str()); // число модуля записанное в строке преоб-разуем в тип double
	double arg = atof(a.c_str()); // число коэффициента перед pi записанное в строке преобразуем в тип double
	complex trig2(mod, arg); // присвоим эти значения новому объекту
	return trig2; 
}
