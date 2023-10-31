#include <iostream>
using namespace std;

double f(double x)
{
    return 3 * x * x + x + 2;
}

int main()
{
    double x, h;
    double interval_start = -2.0;
    double interval_end = 5.0;

    // Setăm pasul
    h = 1.0;

    std::cout << "x\tf(x)" << std::endl;

    for (x = interval_start; x <= interval_end; x += h)
    {
        double result = f(x);
        cout << x << "\t" << result << endl;
    }

    return 0;
}
