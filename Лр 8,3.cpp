#include <iostream>
using namespace std;

double Area1(int n, double a, double b, double h)
{
    switch (n)
    {
        case 1: return a * h / 2;           // трикутник
        case 2: return a * b;               // прямокутник
        case 3: return (a + b) * h / 2;    // трапеція
        default: return 0;
    }
}

int main()
{
    int n = 3;
    double a = 10, b = 20, h = 2;

    cout << "S = " << Area1(n, a, b, h);

    return 0;
}
