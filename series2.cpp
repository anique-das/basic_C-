// 1 + 3 + 5 +....+ n (Sum of odd numbers)

#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter n number of the Odd series: ";
    cin>>n;

    for(int i=1;i<=n;i+=2)
    {
        sum = sum + i;
    }

    cout<<"The sum of the Odd series: "<<sum<<endl;


    return 0;
}
