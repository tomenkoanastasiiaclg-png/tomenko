#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int a[] = {31, 31, 2, 0, 31, 2};

    int *p = a;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool different = true;

        for (int j = 0; j < i; j++)
        {
            if (*(p + i) == *(p + j))
            {
                different = false;
                break;
            }
        }

        if (different)
            count++;
    }

    cout << "Кількість різних елементів = " << count;

    return 0;
}
