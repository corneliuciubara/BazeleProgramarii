#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void findDate(int dayOfYear, int year, int &month, int &day) {
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (dayOfYear < 1 || dayOfYear > (365 + isLeapYear(year))) {
        cout << "Invalid day of the year for the given year." << endl;
        return;
    }
    
    for (month = 0; month < 12; ++month) {
        if (dayOfYear <= daysInMonth[month]) {
            day = dayOfYear;
            break;
        }
        dayOfYear -= daysInMonth[month];
    }
    
    month += 1;
}

int main() {
    int year, dayOfYear, month, day;

    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the day of the year (1-365 or 1-366 for leap years): ";
    cin >> dayOfYear;

    findDate(dayOfYear, year, month, day);

    if (dayOfYear >= 1 && dayOfYear <= (365 + isLeapYear(year))) {
        cout << "The corresponding date is: " << year << "-" << month << "-" << day << endl;
    }

    return 0;
}