#include <iostream>
#include <cmath>

using namespace std;

void calcTrap(double a, double b, double h, double &per, double &sq, double &mid) {
    mid = (a + b) / 2;
    sq = mid * h;
    per = a + b + 2 * h;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, h, per, sq, mid;
    
    cout << "Введите основания трапеции и ее высоту:";

    cin >> a >> b >> h;
    
    if (a < 0 or b < 0 or h < 0) {
      cout << "Необходимо ввести положительные значения!";
    }
    
    calcTrap(a, b, c, per, sq, mid);
    //ama rok star
    cout << "Периметр трапеции:" << per << endl; 
    cout << "Площадь трапеции:" << sq << endl; 
    cout << "Средняя линия трапеции:" << mid << endl; 

    return 0;
}
