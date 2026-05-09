#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream fin("text.txt");

    vector<int> a;
    string line;

    while (getline(fin, line)) {
        a.push_back(line.size());
    }

    fin.close();

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}
