#include <iostream>
using namespace std;

void descompuneInFactoriPrimi(int n) {
    // Verificăm dacă 2 este factor
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // Acum că am eliminat toți factorii 2, n trebuie să fie impar.
    // Deci putem să sărim peste numerele pare (incrementăm cu 2).
    for (int i = 3; i * i <= n; i = i + 2) {
        // Verificăm dacă i este factor și îl afișăm de câte ori este necesar
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    // Dacă n este un număr prim mai mare decât 2
    if (n > 2) {
        cout << n;
    }
}

int main() {
    int n;
    cout << "Introduceti un numar natural N: ";
    cin >> n;

    cout << "Descompunerea in factori primi a numarului " << n << " este: ";
    descompuneInFactoriPrimi(n);

    return 0;
}
