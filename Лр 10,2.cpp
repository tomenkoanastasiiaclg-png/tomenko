#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 5;
    double a[] = {3, -7, -12, 13, -7};

    double *p = a;

    double max = *p;

    for (int i = 1; i < n; i++)
    {
        if (abs(*(p + i)) > abs(max))
            max = *(p + i);
    }

    int first = -1, second = -1;

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > 0)
        {
            if (first == -1)
                first = i;
            else
            {
                second = i;
                break;
            }
        }
    }

    double sum = 0;

    for (int i = first + 1; i < second; i++)
    {
        sum += *(p + i);
    }

    cout << "max = " << max << endl;
    cout << "sum = " << sum;

    return 0;
}
