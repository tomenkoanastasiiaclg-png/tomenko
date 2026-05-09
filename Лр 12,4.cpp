#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n = 3;

    int** A = new int*[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = new int[n];
    }

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 9 + 1;
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    int min = A[0][0];
    int max = A[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] < min)
                min = A[i][j];

            if (A[i][j] > max)
                max = A[i][j];
        }
    }

    cout << "\nmin * max = " << min * max << endl;

    for (int i = 0; i < n; i++)
    {
        delete[] A[i];
    }

    delete[] A;

    return 0;
}
