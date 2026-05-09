#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    ofstream file("numbers.txt");

    int count = 0;
    int i = 2;

    while (count < n) {
        if (i % 2 == 0 && i % n == 0) {
            file << i << " ";
            count++;
        }
        i++;
    }

    file.close();

    cout << "Done!" << endl;

    return 0;
}
