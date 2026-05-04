#include <iostream>
using namespace std;

int DaysInMonth(int m)
{
    if (m == 2) return 28;

    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;

    return 31;
}

int main()
{
    int m = 4;

    cout << "У квітні " << DaysInMonth(m) << " днів";

    return 0;
}
