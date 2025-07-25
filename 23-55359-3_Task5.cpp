#include<iostream>
using namespace std;
int main()
{

    int num;
    int sum = 0;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        if(i%3==0)
            sum=sum+i ;

    }

    cout<<"The sum of number which is divisible by 3 between 1 and "<<sum<<" is "<<sum<<endl;
    return 0;

}
