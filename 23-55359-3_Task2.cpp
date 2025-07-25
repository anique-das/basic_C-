#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three integer numbers"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"The largest integer number is:"<<num1<<endl;
            if (num1%2==0)
            {
                cout<<"Even number"<<endl;
            }
            else
            {
                cout<<"Odd number"<<endl;
            }
        }
        else
        {
            cout<<"The largest integer number is:"<<num3<<endl;
            if (num3%2==0)
            {
                cout<<"Even number"<<endl;
            }
            else
            {
                cout<<"Odd number"<<endl;
            }

        }
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
            cout<<"The largest integer number is:"<<num2<<endl;
            if (num2%2==0)
            {
                cout<<"Even number"<<endl;
            }
            else
            {
                cout<<"Odd number"<<endl;
            }
        }
        else
        {
            cout<<"The largest integer number is:"<<num3<<endl;
            if (num3%2==0)
            {
                cout<<"Even number"<<endl;
            }
            else
            {
                cout<<"Odd number"<<endl;
            }
        }
    }
    return 0;
}
