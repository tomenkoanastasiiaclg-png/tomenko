#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    ofstream fout("numbers.txt");

    for (int i = 0; i < k; i++) {
        double x;
        cin >> x;
        fout << x << " ";
    }

    fout.close();

    ifstream fin("numbers.txt");

    double x;
    int count = 0;

    while (fin >> x) {
        if (x > n)
            count++;
    }

    fin.close();

    cout << "Count = " << count << endl;

    return 0;
}
