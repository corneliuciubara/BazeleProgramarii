#include <iostream>
using namespace std;

int main()
{
    int numar;

    // Introducem numărul de la tastatură
    cout << "Introduceți un număr întreg: ";
    cin >> numar;

    int cifre_pare = 0;
    int cifre_impare = 0;

    numar = abs(numar); // Asigurăm că numărul este pozitiv sau zero

    while (numar > 0)
    {
        int cifra = numar % 10;

        if (cifra % 2 == 0)
        {
            cifre_pare++;
        }
        else
        {
            cifre_impare++;
        }

        numar /= 10;
    }

    // Afișăm rezultatul
    cout << "Numărul de cifre pare: " << cifre_pare << endl;
    cout << "Numărul de cifre impare: " << cifre_impare << endl;

    return 0;
}
