#include <iostream>
using namespace std;
int main()
{
    int num, tens, remainder;
    do 
    {
        cout<<"Enter amount in figures: ";
        cin>>num;
    }
    while((num<-999999) || (num>999999));


    string ones[]{"", " one", " two", " three", " four", " five", " six", " seven", " eight", " nine", " ten", " eleven", " twelve", " thirteen"," fourteen", " fifteen" ," sixteen", " seventeen", " eighteen", " nineteen"};

    string ten[]{"","", " twenty", " thirty", " forty", " fifty", " sixty", " seventy", " eighty", " ninety", " hundred", " thousand"};

    cout<<"In words:";

    if (num < 0)
    {
        cout<<"negative ";
        num = -num;
    }

    int thousand = num/1000;
    int hundred = num%1000;

    if (thousand>0)
    {
        if (thousand>99)
        {
            cout<<ones[thousand/100] + ten[10];
            thousand = thousand%100;
        }       
        if (thousand>19)
        {
            cout<<ten[thousand/10];
            thousand = thousand%10;
        }  
        cout<<ones[thousand]+ ten[11];             
    }


    if (hundred>0)
    {
        if (hundred>99)
        {
            cout<<ones[hundred/100] + ten[10];
            hundred = hundred%100;
        }       
        if (hundred>19)
        {
            cout<<ten[hundred/10];
            hundred = hundred%10;
        }  
        cout<<ones[hundred]; 
                
    }
    if (num==0)
    {
        cout<<"zero";
    }
}