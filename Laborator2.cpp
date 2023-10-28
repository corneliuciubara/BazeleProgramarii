#include <iostream>
using namespace std;

int main()
{
    int day, month, year;

    // Citirea datei curente
    cout << "Introduceti ziua (1-31): ";
    cin >> day;

    cout << "Introduceti luna (1-12): ";
    cin >> month;

    cout << "Introduceti anul: ";
    cin >> year;

    // Incrementăm ziua
    day++;

    if (day > 31)
    {
        day = 1;
        month++;
    }

    if (month > 12)
    {
        month = 1;
        year++;
    }

    // Afișăm data zilei următoare
    cout << "Data zilei următoare este: " << day << "/" << month << "/" << year << endl;

    return 0;
}