#include <iostream>
using namespace std;

int main()
{
    int startHour, startMinute;
    int totalMinutes = 0;

    cout << "Enter the start time (hour and minute): ";
    cin >> startHour >> startMinute;

    totalMinutes = (5 * 45) + (2 * 15) + 45;

    startMinute += totalMinutes;
    startHour += startMinute / 60;
    startMinute %= 60;

    cout << "The end time of the 6th lesson is: " << startHour << " hours and " << startMinute << " minutes." << endl;

    return 0;
}
