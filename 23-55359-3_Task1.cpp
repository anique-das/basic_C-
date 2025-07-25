#include<iostream>
using namespace std;
int main()
{

    char letter;
    cout<<"Enter any letter:";
    cin>>letter;

    switch(letter)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel"<<endl;
        break;


    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':

        cout<<"Consonant"<<endl;
        break;


    default:
        cout<<"Not a character"<<endl;

    }
    return 0;
}

