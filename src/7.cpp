#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int p;
    cout << "Введите количество целых чисел: ";
    cin >> p;

    int sum = 0;
    int product = 1;
    int count = 0;

    for (int i = 0; i < p; ++i) {
        int num;
        cout << "Введите целое число: ";
        cin >> num;

        if (num % 10 == 3 || num % 10 == 4) {
            sum += num;
        }

        if (num % 5 == 0 && num % 3 != 0) {
            product *= num;
        }

        if (num >= 10) {
            int temp = num;
            while (temp >= 10) {
                temp /= 10;
            }
            if (temp == 1) {
                count++;
            }
        }
        else if (num == 1) { 
            count++;
        }
    }

    cout << "Сумма чисел, заканчивающихся на 3 и 4: " << sum << endl;
    cout << "Произведение чисел, делящихся на 5, но не делящихся на 3: " << (product == 1 ? 0 : product) << endl;
    cout << "Количество чисел, начинающихся на 1: " << count << endl;

    return 0;
}
