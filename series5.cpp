// 1^2 + 2^2 + 3^2 + ... + n^2

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter n number of the series: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum = sum + pow(i,2);
    }
    cout<< "The sum of the Power series: "<<sum<<endl;

    return 0;
}
