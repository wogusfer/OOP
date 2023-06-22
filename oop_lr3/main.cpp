#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "complex1.h"
using namespace std;

int main()
{
	system("color f1");
	setlocale(LC_ALL, "rus"); // подключаем русский язык
	double r1, fi1, r2, fi2; // создаём модули и аргументы двух комплексных чисел
	cout << "Введите модуль комплексного числа z: "; 
	cin >> r1;
	cout << "Введите коэффициент перед pi в аргументе z: ";
	cin >> fi1;
	complex trig1(r1, fi1); // создаём объект класса с полученными значения-ми с клавиатуры
	string str = !trig1; // перегрузка оператора операции преобразования в строку
	cout << "Полученное вами компелксное число: " << str << "\n"; // его вы-вод
	cout << "ПРИМЕР: z=-2,25(cos(-0,25pi)+i*sin(-0,25pi))\n";
	cout << "Введите второе комплексное число в тригонометрической форме: "; 
	cin >> str; //ввод комплексного числа в строку
	complex trig(str); // создание объекта с строкой на входе
	complex trig2 = &trig; // перегрузка метода получения комплексного числа из строки
	cout << "Произведение этих комплексных чисел = ";
	complex trig_mult = trig1 * trig2; // перегрузка оператора умножения
	trig_mult.output(); // вывод произведения
	cout << "Частное этих комплексных чисел = "; 
	complex trig_div = trig1 / trig2; // перегрузка оператора деления
	trig_div.output(); // вывод частного
	bool rez = trig1 == trig2; // перегрузка оператора сравнения
	cout << "z1 == z2  - результат = " << rez << endl;
	rez = trig1 != trig2;
	cout << "z1 != z2  - результат = " << rez << endl;
	return 0;
}
