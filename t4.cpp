#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double m, fm , fa, N, a, b;
    do
    {
        cout<<"Enter a Positive Number: ";
        cin>>N;
    } while (N<0);
    
    a = 0.0;

    if(N < 1.0)
    {
        b = 1.0;
    }
    else
    {
        b = N;
    }

    m = (a + b) / 2.0;
    fm = (m * m) - N;

    while (fabs(fm)>=0.01)
    {
        m = (a+b)/2.0;
        fm = (m*m)-N;

        fa = (a*a)-N;

        if(((fm>=0.0) && (fa>=0.0)) || ((fm<=0.0) && (fa<=0.0)))
            a = m;
        else
            b = m;
    }
        cout<<"Sqrt: "<<m;
    
    
}