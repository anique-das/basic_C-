// 1 + 2 + 3 + 4 +.....+n

#include<iostream>
using  namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Enter n number of the series: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum = sum + i;

    }
    cout<<"The sum of the series: "<<sum<<endl;

    return 0;
}
