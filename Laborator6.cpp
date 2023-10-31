#include <iostream>
using namespace std;

void imagineInversa(int numar)
{
    int invers = 0;
    while (numar > 0)
    {
        int cifra = numar % 10;       // extragem ultima cifră
        invers = invers * 10 + cifra; // adăugăm cifra la invers
        numar /= 10;                  // eliminăm ultima cifră
    }
    cout << "Imaginea inversa a numarului este: " << invers << endl;
}

int main()
{
    int numar;

    cout << "Introduceti un numar natural: ";
    cin >> numar;

    if (numar < 0)
    {
        cout << "Numarul introdus nu este natural." << endl;
    }
    else
    {
        imagineInversa(numar);
    }

    return 0;
}
