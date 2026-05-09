#include <iostream>
using namespace std;

int main()
{
    int n = 6, m = 5;

    // динамічні масиви
    int* a = new int[n]{31, -6, 2, 0, 33, 6};
    int* b = new int[m]{31, 22, -10, 3, 2};

    int countA = 0;
    int countB = 0;

    // рахуємо елементи a, не кратні 3
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 != 0)
            countA++;
    }

    // рахуємо елементи b, не кратні 3
    for (int i = 0; i < m; i++)
    {
        if (b[i] % 3 != 0)
            countB++;
    }

    // виводимо масив, де таких елементів більше
    if (countA > countB)
    {
        cout << "Кількість = " << countA << endl;
        cout << "a[i] = { ";

        for (int i = 0; i < n; i++)
        {
            cout << a[i];

            if (i < n - 1)
                cout << ", ";
        }

        cout << " }";
    }
    else
    {
        cout << "Кількість = " << countB << endl;
        cout << "b[j] = { ";

        for (int i = 0; i < m; i++)
        {
            cout << b[i];

            if (i < m - 1)
                cout << ", ";
        }

        cout << " }";
    }

    // очищення пам'яті
    delete[] a;
    delete[] b;

    return 0;
}
