#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define MAX_ITER 1000000

double func(double x)
{
    return x*x*x - x - 11;
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = (a*func(b) - b*func(a))/ (func(b) - func(a));

    cout << fixed << setprecision(4);
    cout << setw(10) << "a" << setw(10) << "b"
         << setw(12) << "f(a)" << setw(12) << "f(b)"
         << setw(12) << "c" << setw(12) << "f(c)" << endl;

    cout << setw(10) << a << setw(10) << b
         << setw(12) << func(a) << setw(12) << func(b)
         << setw(12) << c << setw(12) << func(c) << endl;

    for (int i = 0; i < MAX_ITER; i++)
    {
        if (fabs(func(c)) < 0.001)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;

        c = (a*func(b) - b*func(a))/ (func(b) - func(a));

        cout << setw(10) << a << setw(10) << b
             << setw(12) << func(a) << setw(12) << func(b)
             << setw(12) << c << setw(12) << func(c) << endl;
    }

    cout << "The value of root is : " << c << endl;
    cout << "Program executed by Afifa Rahman" << endl;
}

int main()
{
    double a = 2, b = 3;
    regulaFalsi(a, b);
    return 0;
}






