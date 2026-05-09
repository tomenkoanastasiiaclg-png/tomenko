#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    int* a = new int[n]{31, 31, 2, 0, 31, 2};
    int* b = new int[n]{-22, 31, 22, -10, 1, 2};
    int* c = new int[n];

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    cout << "c[i] = { ";

    for (int i = 0; i < n; i++)
    {
        cout << c[i];

        if (i < n - 1)
            cout << ", ";
    }

    cout << " }";

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
