#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double y = x*(x*(2 * x + 4) - 8) + 3;

    cout << "Значение y: " << y << endl;

    return 0;
}
