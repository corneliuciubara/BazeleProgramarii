#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    cout << "Introduceți o secvență de caractere până la caracterul '*':" << endl;

    char caracter;
    int numarCifre = 0;

    while (cin >> caracter && caracter != '*') {
        if (isdigit(caracter)) {
            numarCifre++;
        }
    }

    cout << "Numărul de cifre din secvență este: " << numarCifre << endl;

    return 0;
}
