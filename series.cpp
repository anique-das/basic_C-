// 1^3 + 2^3 + 3^3 + ... + n^3
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int n, sum=0;
  cout<<"Enter the last number:";
  cin>>n;

  for(int i=1;i<=n;i++)
    {
        sum = sum + pow(i,3);
    }
    cout<<"The sum is: "<<sum<<endl;

    return 0;
}
