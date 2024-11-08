#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {

    if (x <= -M_PI / 2) {
        return 1 / x;
    }
    else if ( x < M_PI / 2) {
        return tan(M_PI * x);
    }
    else {
        return sqrt(pow(x, 3) - 1);
    }
}


int main() {

    setlocale(LC_ALL, "RUSSIAN");
    double x;
    cout << "Введите x: ";
    cin >> x;

    double result = f(x);
    cout << "Результат: " << result << endl;

    return 0;
}
