#include <iostream>
#include <cmath>

int main() {

    int n;
    std::cout << "Enter points count: ";
    std::cin >> n;

    int countOutside = 0;
    for (int i = 0; i < n; ++i) {
        double x, y;
        std::cout << "Enter point coordinates " << i + 1 << ": ";
        std::cin >> x >> y;

        bool inSemicircle = (x * x + y * y <= 100) && (x >= 0) && (y >= 0);

        
        inSemicircle = (y >= 0 && y <= 5);
        bool inSquad = ((x >= 0 && x <= 10) && (y >= -5 && y <= 0));


        double treangleX0 = -10;
        double treangleY0 = 0;

        double treangleX1 = 0;
        double treangleY1 = 0;

        double treangleX2 = 0;
        double treangleY2 = -5;

        double a = (treangleX0 - x) * (treangleY1 - treangleY0) - (treangleX1 - treangleX0) * (treangleY0 - y);
        double b = (treangleX1 - x) * (treangleY2 - treangleY1) - (treangleX2 - treangleX1) * (treangleY1 - y);
        double c = (treangleX2 - x) * (treangleY0 - treangleY2) - (treangleX0 - treangleX2) * (treangleY2 - y);

        bool inTriangle = (a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0);


        bool PointOutOfFigure = (!inSemicircle && !inSquad && !inTriangle);

        if(PointOutOfFigure)
            countOutside++;
    }

    std::cout << "Points out of figure: " << countOutside << std::endl;

    return 0;
}
