#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int a, b, c;

    cout << "Три целых числа (a, b, c): ";
    cin >> a >> b >> c;

    (a % 2 != 0) ? cout << "Сумма: " << (b + c) << endl
        :cout << "Минимум: " << min(a, c) << endl;

    (a % 2 != 0) ? cout << "Произведение: " << (b * c) << endl
        : cout << "";

    return 0;
}
