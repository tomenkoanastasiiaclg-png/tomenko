#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    int A[3][3] =
    {
        {2, 14, -6},
        {-6, 12, 6},
        {2, 36, 0}
    };

    int plusSum = 0, minusSum = 0;
    int plusCount = 0, minusCount = 0;
    int zero = 0;

    int *p = &A[0][0];

    for (int i = 0; i < n * n; i++)
    {
        if (*(p + i) > 0)
        {
            plusSum += *(p + i);
            plusCount++;
        }
        else if (*(p + i) < 0)
        {
            minusSum += *(p + i);
            minusCount++;
        }
        else
            zero++;
    }

    cout << "serd = " << plusSum / plusCount << endl;
    cout << "serv = " << minusSum / minusCount << endl;
    cout << "kilk0 = " << zero << endl;

    return 0;
}
