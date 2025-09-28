#include <iostream>
using namespace std;
int main()
{
    int n1, n2, d1, d2, sum_up, sum_down, gcd = 1, a ,b;
    char operation;

    cout<<"Enter numerator and denominator of first fraction: ";
    cin>>n1>>d1;

    cout<<"Enter numerator and denominator of second fraction: ";
    cin>>n2>>d2;

    cout<<"Choose operation (+, -, *, /): ";
    cin>>operation;

    if(operation=='+')
    {
        sum_up = ((n1*d2)+(n2*d1));
        sum_down = (d1*d2);
    }
    if(operation=='-')
    {
        sum_up = ((n1*d2)-(n2*d1));
        sum_down = (d1*d2);
    }
    if(operation=='*')
    {
        sum_up = (n1*n2);
        sum_down = (d1*d2);
    }
    if(operation=='/')
    {
        sum_up = (n1*d2);
        sum_down = (d1*n2);
    }

    a = sum_up;
    b = sum_down;

    if (a<0)
        a = -a;
    else if (b<0)
        b=-b;

    while(a!=b)
    {
        if (a > b)
            {
            a = a - b;
            gcd = a;
            }
        else
            {
            b = b - a;
            gcd = b;
            }
    }

    cout<<" Result: "<<sum_up/gcd<<"/"<<sum_down/gcd;
}