// 1 + 1/2 + 1/3 +.... + 1/ n

#include<iostream>
using namespace std;

int main()
{
    double n, sum=0;
    cout<<"Enter n number of the series: ";
    cin>>n;

    for(double i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    cout<<"The sum of the series: "<<sum<<endl;

    return 0;
}
