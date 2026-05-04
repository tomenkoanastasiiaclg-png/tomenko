#include <iostream>
using namespace std;

int geomSum(int n, int q, int b1)
{
    if (n == 1)
        return b1;

    return geomSum(n - 1, q, b1) + b1 * pow(q, n - 1);
}

int main()
{
    int n = 5, q = 3, b1 = 5;

    cout << "Sn = " << geomSum(n, q, b1);

    return 0;
}
