#include <iostream>
#include <cmath>
using namespace std;

class points { // базовый класс
protected:
    double ax;
    double ay;
    double bx;
    double by;
    double cx;
    double cy;
    double dx; 
    double dy; 
public:
    points();
    points(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy);
    void get(double x, double y); // вывод полученной координаты точки
    void ploskost(double X, double Y); // вывод координатной плоскости на экран одной точки
    void bigploskost(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy); // вывод координатной плоскости на экран всех точек
    bool proverka(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy); // проверка на существование такого четырехугольника
};

class quadrilateral : points { // производный класс
public:
    quadrilateral () : points (){}
    quadrilateral(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) : points (ax,ay,bx,by,cx,cy,dx,dy){}
    void diagonal(); // нахождение длин диагоналей
    void ploshad(); // нахождение площади получившегося четырехугольника
};

int main()
{
    system("color f1");
    setlocale(LC_ALL, "rus");
    double ax, ay, bx, by, cx, cy, dx, dy; 
    points r;
    cout << "Введите координату х для точки A: "; // просим ввести координаты всех то-чек
    cin >> ax;
    cout << "Введите координату y для точки A: ";
    cin >> ay;
    r.get(ax,ay); // и вывод на экран получившуюся точку в координатах
    cout << "Введите координату х для точки B: ";
    cin >> bx;
    cout << "Введите координату y для точки B: ";
    cin >> by;
    r.get(bx,by);
    cout << "Введите координату х для точки C: ";
    cin >> cx;
    cout << "Введите координату y для точки C: ";
    cin >> cy;
    r.get(cx,cy);
    cout << "Введите координату х для точки D: ";
    cin >> dx;
    cout << "Введите координату y для точки D: ";
    cin >> dy;
    r.get(dx, dy);

    
    quadrilateral j(ax, ay, bx, by, cx, cy, dx, dy);

    cout << "Вывод точки D на координатной плоскости.\n";
    r.ploskost(dx, dy); // функция вывода одной точки на экран
    cout << "Вывод всех точек на координатной плоскости.\n";
    r.bigploskost(ax, ay, bx, by, cx, cy, dx, dy); // функция вывода четырехугольника на экран
    bool t = r.proverka(ax, ay, bx, by, cx, cy, dx, dy); // проверка на существование такого четырехугольника
    if (t == true) { // если существует то найдем его диагонали и площадь
        j.diagonal(); // функция нахождения длин диагоналей
        j.ploshad(); // функция нахождения площади четырехугольника
    }
    return 0;
}

points::points() {
    ax = 0;
    ay = 0;
    bx = 0;
    by = 0;
    cx = 0;
    cy = 0;
    dx = 0;
    dy = 0;
}
points::points(double Ax, double Ay, double Bx, double By, double Cx, double Cy, dou-ble Dx, double Dy) {
    ax = Ax;
    ay = Ay;
    bx = Bx;
    by = By;
    cx = Cx;
    cy = Cy;
    dx = Dx;
    dy = Dy;
}
void points::get(double x, double y) { // вывод полученной координаты точки
    cout << "Координаты точки: (" << x << ";" << y << ")\n";
}
void points::ploskost(double X, double Y) { // вывод координатной плоскости на экран одной точки
    for (int y = 9; y > -1; y--) { // циклом выводим координатную плоскость по одной строке
        int g = 0;
        cout << y; // в начале строки укажем значение y
        if (y ==Y) { // если значение координаты по y совпадает с самим y то
            while (g < 10) { 
                if (X != g) cout << "  "; // если координата по х не совпала с счетчи-ком по х то ставим пробел
                else cout << " *"; // иначе выводим эту точку
                g++;
            }
            cout << "\n"; // переход к следующей строке
        }
        else cout << "\n"; // иначе сразу переходим к следующей строке
    }
    cout << "  0 1 2 3 4 5 6 7 8 9\n"; // координатная ось х
}
void points::bigploskost(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) { // вывод координатной плоскости на экран всех точек
    for (int y = 9; y > -1; y--) {
        int g = 0;
        cout << y;
        if ((ay == y) || (by == y) || (cy == y) || (dy == y)) { // если y совпал хотя бы с одной из координат точек
            while (g < 10) { // счетчик по х
                if (((ax == g) && (ay == y)) || ((bx == g) && (by == y)) || ((cx == g) && (cy == y)) || ((dx == g) && (dy == y)))
                { // если обе координаты совпали хотя бы одной из точек то
                    cout << " *"; // выводим на экран
                }
                else cout << "  "; // иначе пробел
                g++;
            }
            cout << "\n"; 
        }
        else cout << "\n"; // иначе сразу переходим к следующей строке
    }
    cout << "  0 1 2 3 4 5 6 7 8 9\n";
}
bool points::proverka(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
    double a = sqrt(pow((bx - ax), 2) + pow((by - ay), 2)); // находим длины сторон
    double b = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
    double c = sqrt(pow((dx - cx), 2) + pow((dy - cy), 2));
    double d = sqrt(pow((ax - dx), 2) + pow((ay - dy), 2));
    if ((a > (b + c + d)) || (b > (a + c + d)) || (c > (a + b + d)) || (d > (a + b + c))) { // одна сторона не должна быть больше суммы остальных
        cout << "Такого четырехугольника не существует!\n";
        return false;
    }
    else {
        cout << "Такой четырехугольник существует.\n";
        return true;
    }
}

void quadrilateral::diagonal() { // нахождение длин диагонали
    double l = sqrt(pow((this->cx - this->ax), 2) + pow((this->cy - this->ay), 2));
    double r = sqrt(pow((this->dx - this->bx), 2) + pow((this->dy - this->by), 2));
    cout << "Диагональ AC = " << l << " , а диагональ BD = " << r << "\n";
}
void quadrilateral::ploshad() { // нахождение площади получившегося четырехугольника
    double a = sqrt(pow((this->bx - this->ax), 2) + pow((this->by - this->ay), 2)); // находим длины сторон
    double b = sqrt(pow((this->cx - this->bx), 2) + pow((this->cy - this->by), 2));
    double c = sqrt(pow((this->dx - this->cx), 2) + pow((this->dy - this->cy), 2));
    double d = sqrt(pow((this->ax - this->dx), 2) + pow((this->ay - this->dy), 2));
    double p = (a + b + c + d) / 2; // полупериметр
    double S = sqrt((p - a) * (p - b) * (p - c) * (p - d));
    cout << "Площадь этого четырехугольника = " << S << "\n";
}
