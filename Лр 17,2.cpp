#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int K;
    cin >> K;

    ifstream fin("text.txt");
    vector<string> lines;
    string line;

    while (getline(fin, line)) {
        lines.push_back(line);
    }
    fin.close();

    if (K >= lines.size()) {
        lines.clear();
    } else {
        lines.erase(lines.end() - K, lines.end());
    }

    ofstream fout("text.txt");

    for (int i = 0; i < lines.size(); i++) {
        fout << lines[i];
        if (i != lines.size() - 1)
            fout << endl;
    }

    fout.close();

    return 0;
}
