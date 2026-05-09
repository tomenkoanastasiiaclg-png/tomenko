#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("data.txt");

    vector<int> a;
    int x;

    while (fin >> x) {
        a.push_back(x);
    }
    fin.close();

    vector<int> res;

    for (int i = 0; i < a.size(); i++) {
        res.push_back(a[i]);

        if ((i + 1) % 2 == 1 && a[i] % 2 == 0) {
            res.push_back(a[i]);
        }
    }

    ofstream fout("data.txt");

    for (int i = 0; i < res.size(); i++) {
        fout << res[i] << " ";
    }

    fout.close();

    return 0;
}
