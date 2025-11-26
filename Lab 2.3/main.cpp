#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calcFunction(double x) {
    double y;

    if (x >= 0) {
        y = pow(x, 2) + 4 * pow(x, x) + 2;
    }
    else {
        double product = 1;
        for (int i = 1; i <= 4; i++) {
            product = product * (x + pow(x, i - 1));
        }
        y = product;
    }
    return y;
}


int main() {

    double start = -5.0;
    double end = 4.0;
    double h = 0.25;

    cout << "Tabuliuvannia funkcii (Variant 1):" << endl;
    cout << "----------------------" << endl;
    cout << "   X    |      Y      " << endl;
    cout << "----------------------" << endl;


    for (double x = start; x <= end; x = x + h) {

        double y = calcFunction(x);

        cout << showpos << fixed << setprecision(2) << x << " | "
             << noshowpos << setprecision(4) << setw(10) << y << endl;
    }
    return 0;
}