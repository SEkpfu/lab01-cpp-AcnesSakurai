#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    setlocale(LC_ALL, "RUSSIAN");
    int n;
    cout << "Введите целое число n: ";
    cin >> n;

    double S = 0.0;
    int sum = 0; 

    for (int k = 1; k <= n; ++k) {
        sum += k; 
        S += pow(cos(sum), 2); 
    }

    cout << "S = " << S << endl;

    return 0;
}