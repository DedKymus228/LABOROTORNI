#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int N = 6;
    double arr[N];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            arr[i] = 15.5 - i;
        } else {
            arr[i] = 7.2 + i;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}