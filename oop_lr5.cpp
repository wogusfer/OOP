#include <iostream>
using namespace std;

class B1 {
    int X;
public:
    B1(int x){
        X = x;
        cout << "Работает консткуктор B1. Присваивается значение " << X << "\n";
    }
    ~B1(){
        cout << " Деструктор B1 " << "\n";
    }
    void show_B1(){
        cout << "B1= " << X << "\n";
    }
};

class B2 {
    int I;
public:
    B2(int i) {
        I=i;
        cout << "Работает консткуктор B2. Присваивается значение " << I << "\n";
    }
    ~B2() {
        cout << " Деструктор B2 " << "\n";
    }
    void show_B2() {
        cout << "B2= " << I << "\n";
    }
};

class B3 {
    int K;
protected:
    B3(int k) {
        K=k;
        cout << "Работает консткуктор B3. Присваивается значение " << K << "\n";
    }
    ~B3() {
        cout << " Деструктор B3 " << "\n";
    }
    void show_B3() {
        cout << "B3= " << K << "\n";
    }
};

class D1 : public B1, public B2, private B3 {
    int G;
public:
    D1(int x, int i, int k, int g):B1(x),B2(i),B3(k) {
        G = g;
        cout << "Работает консткуктор D1. Присваивается значение " << G << "\n";
    }
    ~D1() {
        cout << " Деструктор D1 " << "\n";
    }
    void show_D1() {
        cout << "D1= " << G << "\n"; show_B1(); show_B2(); show_B3();
    }
};

class D2 : public D1{
    int H;
public:
    D2(int x, int i, int k, int g, int h) : D1(x,i,k,g){
    H = h;
    cout << "Работает консткуктор D2. Присваивается значение " << H << "\n";
    }
    ~D2() {
        cout << " Деструктор D2 " << "\n";
    }
    void show_D2() {
        cout << "D2= " << H << "\n"; show_D1();
    }
};

int main()
{
    system("color f1");
    setlocale(LC_ALL, "rus");
 
    cout << "D2 D(1,2,3,4,5);\n";
    D2 D(1,2,3,4,5);
    cout << "\nСледуя иерархии класса D2: \n";
    D.show_D2();

    return 0;
}
