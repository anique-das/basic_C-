#include<iostream>
using namespace std;
int main()
{
    float held, attend ;
    float percentage;


    cout<<"Enter the number of classes held"<<endl;
    cin>>held;

    cout<<"Enter the number of classes that were attended by the student"<<endl;
    cin>>attend;

    percentage = (attend/held) * 100;

    if(percentage>=80)
    {
        cout<<"The percentage of attendance:"<<percentage<<"%"<<endl;
        cout<<"The student will be allowed to sit for the exam"<<endl;
    }

    else
    {
        cout<<"The percentage of attendance"<<percentage<<"%"<<endl;
        cout<<"The student will not be allowed to sit for the exam"<<endl;
    }
    return 0;
}
