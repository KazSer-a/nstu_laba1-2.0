#include <iostream>
#include <cmath>
using namespace std;

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool ravnobedren(double a, double b, double c) {
    return (a == b || a == c || b == c);
}
//sssss

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;

    cout << "введите стороны треугольника: ";
    cin >> a >> b >> c;

    cout << "периметр: " << perimeter(a, b, c) << endl;
    cout << "площадь : " << area(a, b, c) << endl;

    if (ravnobedren(a, b, c))
        cout << "треугольник равнобедренный" << endl;
    else
        cout << "треугольник не равнобедренный" << endl;

    return 0;
}