#include <iostream>

using namespace std;

int main() {

    const int N = 10;
    char arr1[N];
    char arr2[N];
    char arr3[N];
    int count3 = 0;

    for (int i = 0; i < N; i++) {
        arr1[i] = 5 * i + 30;
    }
    
    for (int i = 0; i < N; i++) {
        arr2[i] = 60 - 5 * i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[count3] = arr1[i];
                count3++;
                break;
            }
        }
    }

    long long product = 1;
    bool found = false;

    for (int i = 0; i < count3; i++) {
        if (arr3[i] < 40) {
            product = product * arr3[i];
            found = true;
        }
    }

    return 0;
}