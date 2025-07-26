#include<iostream>
using namespace std;

int main()
{
   int num1,num2,addition,subtraction,multiplication,division,mod;
   cout<<"Enter two integer numbers:";
   cin>>num1>>num2;

   addition       = num1 + num2;
   subtraction    = num1 - num2;
   multiplication = num1 * num2;
   division       = num1 / num2;
   mod            = num1 % num2;

   cout<<"The addition:"<<addition<<endl;
   cout<<"The subtraction:"<<subtraction<<endl;
   cout<<"The multiplication:"<<multiplication<<endl;
   cout<<"The division:"<<division<<endl;
   cout<<"The mod:"<<mod<<endl;


    return 0;
}

