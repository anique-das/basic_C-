#include <iostream>
using namespace std;


void Swap(int a, int b)
{

    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"First value ="<<a<<endl<<"Second value ="<<b<<endl;
}

int main()
{

   int  x=10,y=15;
    Swap(x,y);
    cout<<"First value ="<<x<<endl<<"Second value ="<<y<<endl;
    return 0;


}







