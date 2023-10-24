#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Nicolah's age: ";
    cin >> x;
    cout << "Miguel's age: ";
    cin >> y;

    cout << "Media = " << (x + y) / 2 << endl;

    if (x > y and x <= 100 and x >= 0 and y <= 100 and y >= 0)
    {
        cout << "Nicolah is with  = " << x - y << " years bigger than Miguel";
    }
    else if (y > x and x <= 100 and x >= 0 and y <= 100 and y >= 0)
    {
        cout << "Miguel is with  = " << y - x << " years bigger than Nicolah";
    }
    else
    {
        cout << "Nicolah and Miguel have the same age";
    }

    return 0;
}