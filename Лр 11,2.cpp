#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int A[3][3] =
    {
        {2, 14, -6},
        {-10, 12, 6},
        {2, 36, 0}
    };

    int min = A[0][0];
    int row = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] < min)
            {
                min = A[i][j];
                row = i;
            }
        }
    }

    for (int i = row; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = A[i + 1][j];
        }
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << " ";

        cout << endl;
    }

    return 0;
}
