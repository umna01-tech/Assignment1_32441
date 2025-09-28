#include <iostream>
using namespace std;
int main()
{
    int n, total = 0;

    do
    {
        cout<<"Enter a Positive Number: ";
        cin>>n;
    }
    while(n<0);

    for(int i = 1; i<=(n/2); i++)
    {
        if((n%i)==0)
        {
            total = i + total;
        }
    }
    if(total==n)
    {
        cout<<n<<" is a perfect number.";
    }
    else
    cout<<n<<" is a not perfect number.";
}