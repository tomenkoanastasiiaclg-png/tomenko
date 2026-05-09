#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    double a[] = {13, 7, 12, 13, 7};

    double *p = a;

    double min = *(p + 1); // перший елемент з парним номером

    for (int i = 1; i < n; i += 2)
    {
        if (*(p + i) < min)
            min = *(p + i);
    }

    cout << "min = " << min;

    return 0;
}
