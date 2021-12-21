#include <iostream>
#include <cmath>

using namespace std;

double ecuacion(double x)
{
    return pow(x,2) - 2 ;
}

int main()
{
    int i=0;
    double exact = sqrt(2), a=1, b=2, tol=0.000001;
    double i_tol=log2((b-a)/tol);

    cout << "el maximo de iterasiones que se realizaran para obtener la presicion desada es: " << i_tol << endl;
    
    while (i<i_tol)
    {
        double x = (a + b)/2;
        double fa = ecuacion(a);
        double fx = ecuacion(x);
        if (fa*fx < 0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
        cout << x << endl;
        i++;    
    }
}
