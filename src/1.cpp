#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double length, width, height;
    double doorWidth, doorHeight;
    double rollWidth, rollLength, rollPrice;

    cout << "Введите длину комнаты (м): ";
    cin >> length;
    cout << "Введите ширину комнаты (м): ";
    cin >> width;
    cout << "Введите высоту комнаты (м): ";
    cin >> height;

    cout << "Введите ширину дверного проема (м): ";
    cin >> doorWidth;
    cout << "Введите высоту дверного проема (м): ";
    cin >> doorHeight;

    cout << "Введите ширину рулона обоев (м): ";
    cin >> rollWidth;
    cout << "Введите длину рулона обоев (м): ";
    cin >> rollLength;
    cout << "Введите цену рулона обоев (руб): ";
    cin >> rollPrice;

    double wallArea = 2 * height * (length + width); 
    double doorArea = doorWidth * doorHeight; 
    double wallpaperArea = wallArea - doorArea; 

    double rollArea = rollWidth * rollLength;

    int rollsNeeded = ceil(wallpaperArea / rollArea);

    double totalCost = rollsNeeded * rollPrice;

    cout << "Необходимое количество рулонов обоев: " << rollsNeeded << endl;
    cout << "Общая стоимость обоев: " << totalCost << " руб." << endl;

    return 0;
}
