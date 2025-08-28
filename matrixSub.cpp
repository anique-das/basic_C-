#include<iostream>
using  namespace std;
int main()
{

    int matA[3][3], matB[3][3], matAddition[3][3];

    cout<<"Elements for matrix A: "<<endl;

    //input the matrix A
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << "Element at [" << i+1 << "][" << j+1 << "]: ";
            cin>>matA[i][j];
        }
        cout<<endl;
    }

    cout<<"The matrix A is :"<<endl;

    //print the matrix A
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //For matrix B
    cout<<"Elements for matrix B: "<<endl;

    //input the matrix B
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << "Element at [" << i+1 << "][" << j+1 << "]: ";
            cin>>matB[i][j];
        }
        cout<<endl;
    }


//print the matrix B
    cout<<"The matrix B is :"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }


    // Adding both matrices
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            matAddition[i][j] = matA[i][j] - matB[i][j];
        }
    }
    cout<<endl;


    // Display the matrix
    cout << "Sum of the two matrices: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matAddition[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

