#include <iostream>
#include <cmath>
#include <locale>
#include <clocale>

using namespace std;

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));

}
///////////
bool ravnobedren(double a, double b, double c) {
    return (a == b || a == c || b == c);
}

int main() {
    // Устанавливаем локаль для поддержки русского языка
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    double a, b, c;

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    // Проверка на отрицательные числа
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    
    // Проверка на существование треугольника (неравенство треугольника)
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник не существует" << endl;
        return 0;
    }

    cout << "Периметр: " << perimeter(a, b, c) << endl;
    cout << "Площадь: " << area(a, b, c) << endl;

    if (ravnobedren(a, b, c)) {
        cout << "Треугольник равнобедренный" << endl;
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }

    return 0;
}
