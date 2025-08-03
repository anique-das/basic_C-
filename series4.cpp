// 1.5 + 2.5 + 3.5 +....+ n

#include<iostream>
using namespace std;
int main()
{
    float n, sum=0;
    cout<<"Enter n number of the Even series: ";
    cin>>n;

    for(float i=1.5;i<=n;i+=1)
    {
        sum = sum + i;
    }

        cout<<"The sum of the non integer series: "<<sum<<endl;


    return 0;
}
