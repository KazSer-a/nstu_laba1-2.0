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

    cin >> a >> b >> h;
    
    calcTrap(a, b, c, per, sq, mid);
    //ama rok star
    cout << per << endl; 
    cout << sq << endl; 
    cout << mid << endl; 

    return 0;
}
