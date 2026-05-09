#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int **A = new int*[n];
    for (int i = 0; i < n; i++)
        A[i] = new int[n];

    int *b = new int[n*n];
    int *c = new int[n*n];

    int kb = 0, kc = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];

            if (A[i][j] < 0) b[kb++] = A[i][j];
            else if (A[i][j] > 0) c[kc++] = A[i][j];
        }
    }

    int sb = 0, sc = 0;

    for (int i = 0; i < kb; i++) sb += b[i];
    for (int i = 0; i < kc; i++) sc += c[i];

    cout << "Sum b = " << sb << endl;
    cout << "Sum c = " << sc << endl;

    for (int i = 0; i < n; i++)
        delete[] A[i];
    delete[] A;

    delete[] b;
    delete[] c;

    return 0;
}
