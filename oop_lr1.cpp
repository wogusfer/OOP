#pragma once
class chess
{
private: 
	int a;
	int b;
public:
	void proverka();
	void setAB(int x, int y);
};

#include "chess.h"
#include <iostream>
using namespace std;

void chess::setAB(int x, int y) {
	a = x;
	b = y;
}

void chess::proverka() {
	cout << "Данное поле является белым?  ";
	if ((a + b) % 2 == 0) cout << "Нет";
	else cout << "Да";
}

#include <iostream>
#include "chess.h"
using namespace std;

int main()
{
    system("color f1");
    chess j; // создаем объект
    setlocale(LC_ALL, "rus"); // подключаем русский язык
    int a, b; // вводим значения строки и столбца шахматной доски
    cout << "Введите значения строки и столбца шахматной доски. Помним, что шахматная доска это квадрат размером 8х8.\n" << "Строка: ";
    cin >> a;
    while ((a < 1) || (a > 8)) { // проверка на верность введенных данных
        cout << "Значение не удовлетворяет условию. Введите число заново: ";
        cin >> a;
    }
    cout << "Столбец: ";
    cin >> b;
    while ((b < 1) || (b > 8)) {
        cout << "Значение не удовлетворяет условию. Введите число заново: ";
        cin >> b;
    }
    j.setAB(a, b); // сеттим переменные
    j.proverka(); // проверяем истинность высказывания 
    return 0;
}
