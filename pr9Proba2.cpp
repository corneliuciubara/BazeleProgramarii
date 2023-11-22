#include <iostream>
using namespace std;

int CIFRA_PARA(int n) {
    int digit=-1;
    while (n > 0) {
        int cifra = n % 10;
        if (cifra % 2 == 0) {
           digit=cifra; 
        }
        n /= 10;
    }
    return digit;
}

int main() {
    int n;

    cout << "Introduceți un număr natural cu cel mult 6 cifre: ";
    cin >> n;

    if (n >= 0 && n <= 999999) {
        int rezultat = CIFRA_PARA(n);

        if (rezultat != -1) {
            cout << "Prima cifră pară din numărul " << n << " este: " << rezultat << endl;
        } else {
            cout << "Nu s-a găsit nicio cifră pară în numărul " << n << endl;
        }
    } else {
        cout << "Numărul introdus nu este valid. Introduceți un număr natural cu cel mult 6 cifre." << endl;
    }

    return 0;
}
