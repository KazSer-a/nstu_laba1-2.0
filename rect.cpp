#include <iostream>
#include <cmath>
using namespace std;

// Функция для периметра прямоугольника
double perimetr(double a, double b) {
    return 2 * (a + b);
}

// Функция для площади прямоугольника
double area(double a, double b) {
    return a * b;
}

// Функция для диагонали прямоугольника
double diagonal(double a, double b) {
    return sqrt(a*a + b*b);
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;

    cout << "Введите длины сторон прямоугольника: ";
    cin >> a >> b;

    cout << "Периметр: " << perimetr(a, b) << endl;
    cout << "Площадь: " << area(a, b) << endl;
    cout << "Длина диагонали: " << diagonal(a, b) << endl;

    return 0;
}