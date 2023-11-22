#include <iostream>
#include <cctype>

using namespace std;

int myisdigit(char caracter1) {
    if (caracter1 > '0' && caracter1 < '9') {
    return 1;
    }
    else {
        return 0;
    }
}

int main() {
    cout << "Introduceți o secvență de caractere până la caracterul '*':" << endl;

    char caracter;
    int numarCifre = 0;

    while (cin >> caracter && caracter != '*') {
        if (myisdigit(caracter)) {
            numarCifre++;
        }
    }

    cout << "Numărul de cifre din secvență este: " << numarCifre << endl;

    return 0;
}
