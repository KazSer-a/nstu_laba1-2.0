#include <iostream>
#include <clocale>

using namespace std;

void calcTrap(double a, double b, double c, double d, double h,
              double &per, double &sq, double &mid) {
    mid = (a + b) / 2.0;
    sq = mid * h;
    per = a + b + c + d;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c, d, h;
    double per, sq, mid;

    cout << "Введите основание a: ";
    cin >> a;

    cout << "Введите основание b: ";
    cin >> b;

    cout << "Введите боковую сторону c: ";
    cin >> c;

    cout << "Введите боковую сторону d: ";
    cin >> d;

    cout << "Введите высоту h: ";
    cin >> h;

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "Ошибка: все значения должны быть положительными." << endl;
        return 1;
    }

    calcTrap(a, b, c, d, h, per, sq, mid);

    cout << endl;
    cout << "Результаты вычислений:" << endl;
    cout << "Периметр трапеции: " << per << endl;
    cout << "Площадь трапеции: " << sq << endl;
    cout << "Средняя линия трапеции: " << mid << endl;

    return 0;
}
