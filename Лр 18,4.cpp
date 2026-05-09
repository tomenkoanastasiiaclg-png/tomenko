#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");

    int a[100];
    int x, n = 0;

    while (fin >> x) {
        a[n++] = x;
    }
    fin.close();

    int m[4][4];
    int k = n - 16;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            m[i][j] = a[k++];

    int sum = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < i; j++)
            sum += m[i][j];

    cout << "Sum = " << sum << endl;

    return 0;
}
