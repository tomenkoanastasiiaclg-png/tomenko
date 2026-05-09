#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    ofstream fout("data.txt");

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        fout << x << " ";
    }

    fout.close();

    ifstream fin("data.txt");

    int x, mx;
    fin >> mx;  

    while (fin >> x) {
        if (x > mx)
            mx = x;
    }

    fin.close();

    cout << "Max = " << mx << endl;

    return 0;
}
