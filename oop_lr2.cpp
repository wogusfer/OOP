#pragma once
class complex1
{
private:
	double real;
	double imag;

public:

	complex1(double r = 3., double i = 3.); 

	complex1(const complex1& obj); // конструктор копирования

	~complex1(); // деструктор

	void out(); // функция вывода комплексного числа

	complex1 umnozhenie(const complex1& c1); // функция, перемножающая два комплексных числа(в виде объектов) и возвращающую объект.
};

#include "complex1.h"
#include <iostream>
using namespace std;

complex1::complex1(double r , double i) {
	real = r;
	imag = i;
}

complex1::complex1(const complex1& obj)
{
	this->real = obj.real;
	this->imag = obj.imag;
}

void complex1::out() {
	cout << real << "+" << imag << "i" << "\n";
}

complex1 complex1::umnozhenie(const complex1& c1) {
	complex1 temp;
	temp.real = c1.real * this->real - c1.imag * this->imag;
	temp.imag = c1.real * this->real + c1.imag * this->imag;
	return (temp);
}

complex1::~complex1() {
	cout << "Сработал деструктор\n";
}

#include <iostream>
#include "complex1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // подключаем русский язык
	system("color F1"); 
	complex1 a; // конструктор по умолчанию
	cout << "a = ";
	a.out(); // вывод объекта а
	complex1 b(1,2); //конструктор со своими значениями
	cout << "b = ";
	b.out(); // вывод объекта b 
	complex1 c; // создаём новый объкт
	c = b.umnozhenie(a); // присваиваем ему полученные умножением двух дру-гих объектов значения
	cout << "\na*b = ";
	c.out(); // вывод этого объекта
	cout << "\n";
	complex1 d(c); // объект с присвоенными значениями конструктора копиро-вания другого объекта
	cout << "Проверяем работу конструктора копирования. Присваиваем значения объекта c объекту d.\nd = ";
	d.out(); // вывод
	return 0;
}
