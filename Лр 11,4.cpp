#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int A[3][3] =
    {
        {2, 4, -6},
        {-6, 1, 6},
        {2, 6, 0}
    };

    int min = A[0][1];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i) 
            {
                if (A[i][j] < min)
                    min = A[i][j];
            }

            if (i > j) 
            {
                sum += A[i][j];
            }
        }
    }

    cout << "Мінімальний елемент = " << min << endl;
    cout << "Сума = " << sum;

    return 0;
}
