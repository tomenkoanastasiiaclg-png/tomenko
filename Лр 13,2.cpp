#include <iostream>
#include <ctime>
using namespace std;

bool sameDigits(int x) {
    return x / 10 == x % 10;
}

int main() {
    int n;
    cin >> n;

    int **A = new int*[n];
    for (int i = 0; i < n; i++)
        A[i] = new int[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 10 + rand() % 90;
        }
    }

    int sum = 0;

    for (int j = 0; j < n; j++) {
        bool bad = false;

        for (int i = 0; i < n; i++) {
            if (sameDigits(A[i][j])) {
                bad = true;
                break;
            }
        }

        if (!bad) {
            for (int i = 0; i < n; i++)
                sum += A[i][j];
        }
    }

    cout << "Sum = " << sum << endl;

    for (int i = 0; i < n; i++)
        delete[] A[i];
    delete[] A;

    return 0;
}
