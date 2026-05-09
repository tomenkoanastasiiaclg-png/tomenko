#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("greeting.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "Hello world!\n";
    file << "Number: " << 123 << "\n";
    file << "Another number: " << 45.67 << "\n";

    file.close();

    cout << "File created and data written!" << endl;

    return 0;
}
