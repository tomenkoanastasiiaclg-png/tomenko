#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int a[20] = {3, 11, -10, 12, 35, 2};

    int *p = a;

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) % 5 == 0)
        {
            int sum = 0;

            for (int j = 0; j < i; j++)
            {
                sum += *(p + j);
            }

            for (int k = n; k > i + 1; k--)
            {
                *(p + k) = *(p + k - 1);
            }

            *(p + i + 1) = sum;

            n++;
            i++;
        }
    }

    cout << "a[i] = { ";

    for (int i = 0; i < n; i++)
    {
        cout << *(p + i);

        if (i < n - 1)
            cout << ", ";
    }

    cout << " }";

    return 0;
}
