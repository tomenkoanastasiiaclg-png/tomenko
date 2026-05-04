#include <iostream>
using namespace std;

double sumr(int n)
{
    if (n == 0)
        return 1;

    return sumr(n - 1) + 1.0 / (1 + n);
}

int main()
{
    int n = 5;

    cout << "S = " << sumr(n);

    return 0;
}
