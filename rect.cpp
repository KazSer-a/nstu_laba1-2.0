#include <iostream> ##izmen
#include <cmath> 

using namespace std;

double perimetr(double a, double b) {
    return 2 * (a + b)
}

double area(double a, double b) {
    return a * b;
    
}
double diagonal(double a,double b) {
    return sqrt(a*a + b*b);
}

int main() {
    stelocale(LC_ALL, "Russian")
    
    double a,b;
    cout << "Введите длины сторон прямоугольнка(a и b):";
    cin >> a >> b
    
    cout << "Периметр: " << perimeter(a, b) << endl;
    cout << "Площадь: " << area(a, b) << endl;
    cout << "Диагональ: " << diagonal(a, b) << endl;
    
    return 0;
}