#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int **A = new int*[n];
    for (int i = 0; i < n; i++)
        A[i] = new int[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    int *b = new int[n];

    for (int j = 0; j < m; j++) {
        int imax = 0, imin = 0;

        for (int i = 1; i < n; i++) {
            if (A[i][j] > A[imax][j]) imax = i;
            if (A[i][j] < A[imin][j]) imin = i;
        }

        int prod = 1;

        for (int k = 0; k < m; k++) {
            prod *= A[imax][k] * A[imin][k];
        }

        b[j] = prod;
    }

    for (int j = 0; j < m; j++)
        cout << b[j] << " ";

    for (int i = 0; i < n; i++)
        delete[] A[i];
    delete[] A;
    delete[] b;

    return 0;
}
