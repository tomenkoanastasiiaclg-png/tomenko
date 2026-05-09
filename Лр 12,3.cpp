#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    int* a = new int[20]{-2, -1, 2, 0, 3, -2};

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            for (int j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }

            a[i] = sum;

            n++;
            i++;
        }
    }

    cout << "a[i] = { ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i];

        if (i < n - 1)
            cout << ", ";
    }

    cout << " }";

    delete[] a;

    return 0;
}
