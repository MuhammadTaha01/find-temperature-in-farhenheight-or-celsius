#include<iostream>
using namespace std;
int main()
{
    float c,f;
    char choice;
    cout<<"Enter c for (celsius) & f for (farhenheight): ";
    cin>>choice;

    if(choice=='c')
    {
        cout<<"Type temperature in Celsius: ";
        cin>>c;
        f=(c*9.0/5.0)+32;
        cout<<"The temperature in Farhenheight is: "<<f<<endl;
    }

    else if(choice=='f')
    {
        cout<<"The temperature in Farhenheight is: ";
        cin>>f;
        c=(f-32)+5.0/9.0;
        cout<<"The temperature in Celsius is: "<<c;
    }

        return 0;

}
