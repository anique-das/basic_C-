#include<iostream>
using namespace std;

int main()
{
    char lt;
    cout<<"Enter the letter:";
    cin>>lt;

    lt = toupper(lt);

    if(lt=='A' || lt=='E'||lt=='I' || lt=='O' || lt=='U')
    {
        cout<<lt<<" is a vowel letter"<<endl;

    }
    else
    {
        cout<<lt<<" is a consonant letter"<<endl;
    }

    return 0;
}
