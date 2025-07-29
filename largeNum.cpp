#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4,large;
    cout<<"Enter any four numbers:";
    cin>>num1>>num2>>num3>>num4;

    if(num1>num2 && num1>num3 && num1>num4)
    {
        large = num1;
    }

    else if(num2>num1 && num2>num3 && num2>num4)
    {
        large = num2;
    }

    else if(num3>num1 && num3>num2 && num3>num4)
    {
        large = num3;
    }

    else
    {
        large = num4;
    }

    cout<<"The largest among the four numbers are "<<large<<endl;


    return 0;
}
