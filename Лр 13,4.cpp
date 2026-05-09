#include <iostream>
using namespace std;

int main() {
    char *s = new char[1000];

    cout << "Enter sentence: ";
    cin.getline(s, 1000);

    int count = 0, len = 0;

    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            len++;
        } else {
            if (len > 7) count++;
            len = 0;
        }

        if (s[i] == '\0') break;
    }

    cout << "Count = " << count << endl;

    delete[] s;

    return 0;
}
