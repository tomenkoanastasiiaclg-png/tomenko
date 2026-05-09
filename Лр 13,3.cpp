#include <iostream>
#include <cctype>
using namespace std;

void toTitle(char *s) {
    bool newWord = true;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            newWord = true;
        } else if (newWord) {
            s[i] = toupper(s[i]);
            newWord = false;
        }
    }
}

int main() {
    char *s = new char[1000];

    cout << "Enter sentence: ";
    cin.getline(s, 1000);

    toTitle(s);

    cout << s << endl;

    delete[] s;

    return 0;
}
