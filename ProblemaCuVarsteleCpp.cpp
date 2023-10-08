#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    string birthdate;
};
int main()
{
    Person person1;
    person1.name = "Arthur Morgan";
    person1.birthdate = "1990-05-15";
    Person person2;
    person2.name = "John Marston";
    person2.birthdate = "1992-08-20";

    if (person1.birthdate < person2.birthdate)
    {
        cout << person1.name << " is older than " << person2.name << endl;
    }
    else if (person1.birthdate > person2.birthdate)
    {
        cout << person2.name << " is older than " << person1.name << endl;
    }
    else
    {
        cout << person1.name << " and " << person2.name << " have the same age" << endl;
    }

    return 0;
}