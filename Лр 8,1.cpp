#include <iostream>
using namespace std;

int SumRange(int A, int B)
{
    if (A >= B)
        return 0;

    int sum = 0;

    for (int i = A; i <= B; i++)
        sum += i;

    return sum;
}

int main()
{
    int A = 12;
    int B = 15;

    cout << "Sum = " << SumRange(A, B);

    return 0;
}
