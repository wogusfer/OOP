#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void filling(vector<int>& vect) {
    for (int i = 0; i < 15; i++) vect.push_back(rand() % 100);
}

void print(const vector<int>& vect) {
    for (auto& var : vect) cout << var << "  ";
    cout << "\n";
}

bool greater10(int value)
{
    return value > 10;
}

int task1(const vector<int>& vect) {
    int count = 0;
    count = count_if(vect.begin(), vect.end(), greater10);
    return count;
}

void task2(const vector<int>& vect) {
    for (auto& var : vect) {
        int a = var * var;
        cout << var << "\t" << a << "\n";
    }
}

int task3(const vector<int>& vect) {
    vector<int>::const_iterator it;
    int IT;
    it = vect.begin();
    while (it != vect.end()) 
    {
        IT += *it; 
        ++it;
    }
    return IT;
}

int main()
{
    system("color f1");
    setlocale(LC_ALL, "rus");
    vector <int> vect;

    cout << "Идёт радномное заполнение массива...\n";
    filling(vect);
    print(vect);

    cout << "Количество элементов со значениями больше 10: ";
    int b = task1(vect);
    cout << b << "\n";

    cout << "Находим квадратичный корень из всех элементов.\n"; 
    task2(vect);

    cout << "Находим сумму всех элементов: ";
    auto sum = task3(vect);
    cout << sum << "\n";

    return 0;
}
