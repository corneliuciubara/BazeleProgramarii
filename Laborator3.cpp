#include <iostream>
using namespace std;

int main()
{
    double length; // Lungimea segmentului
    int unit;      // Numărul unității de măsură

    // Citirea lungimii și unității de măsură
    cout << "Introduceti lungimea segmentului: ";
    cin >> length;

    cout << "Introduceti numarul unitatii de masura (1 - dm, 2 - km, 3 - m, 4 - mm, 5 - cm): ";
    cin >> unit;

    // Convertim lungimea în metri, bazat pe numărul unității de măsură
    switch (unit)
    {
    case 1:           // dm
        length /= 10; // 1 decimetru = 0.1 metri
        break;
    case 2:             // km
        length *= 1000; // 1 kilometru = 1000 metri
        break;
    case 3: // m
        // Lungimea este deja în metri, nu facem nimic
        break;
    case 4:             // mm
        length /= 1000; // 1 milimetru = 0.001 metri
        break;
    case 5:            // cm
        length /= 100; // 1 centimetru = 0.01 metri
        break;
    default:
        cerr << "Numarul unitatii de masura nu este valid." << endl;
        return 1;
    }

    // Afișăm lungimea segmentului în metri
    cout << "Lungimea segmentului in metri este: " << length << " m" << endl;

    return 0;
}