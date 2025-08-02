#include<iostream>
using  namespace std;

int main()
{
    int num1, num2,n1, n2, rem, gcd, lcm;
    cout<<"Enter two positive numbers:";
    cin>>num1>>num2;

    n1=num1;
    n2=num2;
//Find the GCD



    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;

    }
    cout<<"The GCD is: "<<n1<<endl;

//Find the LCM

    gcd = n1;
    lcm = (num1 * num2)/gcd;
    cout<<"The LCM is: "<<lcm<<endl;

    return 0;
}
