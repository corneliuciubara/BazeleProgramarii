#include <iostream>
using namespace std;

int main()
{
    cout << "Introduceți numerele de 3 cifre:" << endl;

    for (int i = 100; i < 1000; ++i)
    {
        int cifra1 = i / 100;
        int cifra2 = (i / 10) % 10;
        int cifra3 = i % 10;

        int suma_cifrelor = cifra1 + cifra2 + cifra3;

        if (suma_cifrelor % 5 == 0)
        {
            std::cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
