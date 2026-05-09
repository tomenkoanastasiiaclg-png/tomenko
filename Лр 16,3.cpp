#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    ofstream file("triangle.txt");
    file << a << " " << b << " " << c << "\n";
    file.close();

    ifstream fin("triangle.txt");
    fin >> a >> b >> c;
    fin.close();

    bool ok = (a + b > c) && (a + c > b) && (b + c > a);

    ofstream fout("triangle.txt", ios::app);

    if (ok)
        fout << " Triangle exists";
    else
        fout << " No triangle";

    fout.close();

    return 0;
}
