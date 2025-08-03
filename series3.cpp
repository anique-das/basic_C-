// 2 + 4 + 6 +....+ n  (Sum of even numbers)

#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter n number of the Even series: ";
    cin>>n;

    for(int i=2;i<=n;i+=2)
    {
        sum = sum + i;
    }

    cout<<"The sum of the Even series: "<<sum<<endl;

    return 0;
}
