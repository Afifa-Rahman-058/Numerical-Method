#include <iostream>
#include <cmath>
using namespace std;
#define EPSILON 0.0001

double func(double x)
{
    return x*x*x - 2*x - 5;
}

double derivFunc(double x)
{
    return 3*x*x - 2;
}

void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);
        x = x - h;
    }
    cout << "The value of the root is : " << x << endl;
    cout << "Program executed by Afifa Rahman" << endl;
}

int main()
{
    double x0 = 2;
    newtonRaphson(x0);
    return 0;
}




