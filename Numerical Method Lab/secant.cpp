#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
    return pow(x, 3) - x - 11;
}

void secant(float x1, float x2, float E)
{
    float n = 0, xm, x0, c;
    if (f(x1) * f(x2) < 0) {
        do {
            x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
            c = f(x1) * f(x0);
            x1 = x2;
            x2 = x0;
            n++;
            if (c == 0)
                break;
            xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        } while (fabs(xm - x0) >= E);

        cout << "Root of the given equation = " << x0 << endl;
        cout << "No. of iterations = " << n << endl;
        cout << "Program executed by Afifa Rahman" << endl;
    } else
        cout << "Can not find a root in the given interval" << endl;
}

int main()
{
    float x1 = 2, x2 = 3, E = 0.0001;
    secant(x1, x2, E);
    return 0;
}














