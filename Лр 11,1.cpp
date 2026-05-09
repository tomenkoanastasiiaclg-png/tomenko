#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int A[3][3] =
    {
        {2, 14, -6},
        {-10, 3, 5},
        {1, 36, 9}
    };

    int *p = &A[0][0];

    int sum = 0;

    for (int i = 0; i < n * n; i++)
    {
        if (*(p + i) > 0)
            sum += *(p + i);
    }

    for (int i = 0; i < n * n; i++)
    {
        if (*(p + i) % 2 == 0)
            *(p + i) = sum;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";

        cout << endl;
    }

    return 0;
}
