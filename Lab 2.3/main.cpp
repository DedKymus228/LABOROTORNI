#include <iostream>
using namespace std;

#define MULTIPLY(a, b) ((a) * (b))

template <typename T>
T calculate(T x, T y) {
    return MULTIPLY(x, x) + 2 * MULTIPLY(y, y) - 3 * x;
}

int main() {
    long x_long = 5;
    long y_long = 3;
    cout << calculate(x_long, y_long) << endl;

    float x_float = 2.5;
    float y_float = 1.2;
    cout << calculate(x_float, y_float) << endl;

    return 0;
}