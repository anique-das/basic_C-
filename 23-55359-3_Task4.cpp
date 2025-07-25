#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int a = 0, b =1;
    cout<<"Enter the number value of Fibonacci series: ";
    cin>>n;


    for(int i=0; i<=n; ++i)
    {
        sum = sum + a;
        int next_value = a + b;
        a = b;
        b = next_value;
    }

    cout<<"Sum of the first"<<endl<<n<<endl<<"Fibonacci numbers is"<<endl<<sum<<endl;
    return 0;
}
