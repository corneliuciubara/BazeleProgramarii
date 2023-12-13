#include <iostream>
#include <string>

using namespace std;

bool estePalindrom(const string& text) {
    int lungime = text.length();
    for (int i = 0; i < lungime / 2; i++) {
        if (text[i] != text[lungime - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string text;
    cout << "Introduceți un text (maxim 255 de caractere): ";
    getline(cin, text);

    if (estePalindrom(text)) {
        cout << "Textul este un palindrom." << endl;
    } else {
        cout << "Textul nu este un palindrom." << endl;
    }

    return 0;
}