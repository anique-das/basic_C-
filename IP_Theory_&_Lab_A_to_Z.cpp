//IP Theory


#include<iostream>
using namespace std;
int main(){
   float cgpa;
   cout<<"Enter your cgpa:";
   cin>>cgpa;
   if(cgpa<2.50){
    cout<<"Probation Student";
   }
   else{
    cout<<"Not Probation Student";
   }
}




 #include<iostream>
using namespace std;
int main(){
   float cgpa;
   cout<<"Enter your cgpa:";
   cin>>cgpa;
   if(cgpa<2.50){
    cout<<"Probation Student";
   }
   else if(cgpa>3.74){
    cout<<"Scholarship Student";
   }
   else{
    cout<<"Regular Student";
   }
}



 #include<iostream>
using namespace std;
int main(){
   //Leap Year //Nested if-else
   /*Condition:
       1)Year%400==0
       2)Year%4==0 and Year%100!=0*/
       int year;
       cout<<"Enter a year:";
       cin>>year;
       if(year%400==0){
        cout<<year<<" is a leap year";
       }
       else if(year%4==0){
            if(year%100!=0){
                cout<<year<<" is a leap year";
            }
            else{
                cout<<year<<" is not a leap year";
            }
       }
       else{
        cout<<year<<" is not a leap year";
       }
}




 #include<iostream>
using namespace std;
int main(){
   //Leap Year //Nested if-else
   /*Condition:
       1)Year%400==0
       OR
       2)Year%4==0 and Year%100!=0*/
       int year;
       cout<<"Enter a year:";
       cin>>year;
       if(year%400==0){
        cout<<year<<" is a leap year";
       }
       else if(year%4==0 && year%100!=0){
        cout<<year<<" is a leap year";
       }
       else{
        cout<<year<<" is not a leap year";
       }
}





 #include<iostream>
using namespace std;
int main(){
   //Leap Year //Nested if-else
   /*Condition:
       1)Year%400==0
       OR
       2)Year%4==0 and Year%100!=0*/
       int year;
       cout<<"Enter a year:";
       cin>>year;
       if(year%400==0 || (year%4==0 && year%100!=0)){
        cout<<year<<" is a leap year";
       }
       else{
        cout<<year<<" is not a leap year";
       }
}



 /*Write a C++ program that has two functions namely EvenOdd() and PosNeg().
  First the PosNeg() function will be called to find out whether a number is positive or negative.
   If the number is positive, PosNeg() function will print "The number is positive" and the EvenOdd()
   function will be called from PosNeg() function to find out whether the number is Even or Odd.
   If the number is negative, the PosNeg() function will only print "The number is negative".*/




  #include<iostream>
using namespace std;
void EvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is an even number"<<endl;
    }
    else{
        cout<<num<<" is an odd number"<<endl;
    }
}
void PosNeg(int num){
    if(num>=0){
        cout<<num<<" is a positive number"<<endl;
        EvenOdd(num);
    }
    else{
        cout<<num<<" is a negative number"<<endl;
    }
}
int main(){
    PosNeg(47);
    PosNeg(-6);
}




 #include<iostream>
using namespace std;
void EvenOdd(int arr[2][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j]%2==0){
                cout<<arr[i][j]<<" is an even number"<<endl;
            }
            else{
                cout<<arr[i][j]<<" is an odd number"<<endl;
            }
        }
    }
}
int main(){
    int ar1[2][2]={45,10,0,97};
    EvenOdd(ar1);
}




 #include<iostream>
using namespace std;
int main(){
   int arr[5]={20,30,40,50,60};
   int *ptr=&arr[0];

   cout<<"Print Elements using pointer:";
   for(int i=0; i<5; i++){
    //cout<<*(ptr+i)<<" ";
    cout<<ptr[i]<<" ";
   }

}




 #include<iostream>
using namespace std;
int main(){
   int arr[5]={20,30,40,50,60};
   int *ptr=&arr[2];

   cout<<"Print Elements using pointer:";
   for(int i=0; i<3; i++){
    //cout<<*(ptr+i)<<" ";
    cout<<*(ptr-i)<<" ";
    //cout<<ptr[i]<<" ";
   }

}




#include<iostream>
using namespace std;
int main(){
   int arr[5]={20,30,40,50,60};
   int *ptr=&arr[2];

   cout<<"Print Elements using pointer:";
   for(int i=0; i<3; i++){
     //cout<<ptr[i]<<" ";
     cout<<ptr[-i]<<" ";
   }

}



 #include<iostream>
using namespace std;
int main(){
   int arr[5]={20,30,40,50,60};
   int *ptr=&arr[4];

   cout<<"Print Elements using pointer:";
   for(int i=0; i<5; i++){
     cout<<*(ptr-i)<<" ";
   }

}




 #include<iostream>
using namespace std;
int main(){
   int arr[5]={20,30,40,50,60};
   int *ptr=&arr[4];

   cout<<"Print Elements using pointer:";
   for(int i=0; i<5; i++){
     cout<<ptr[-i]<<" ";
   }

}




 #include<iostream>
using namespace std;
class Student{ //Access Modifier/Specifier - Public, Private, Protected
public:
    string Name;
    float cgpa;
};
int main(){
  Student S1;//S1 is an object of class Student
  S1.Name="ABC";
  S1.cgpa=3.44;
  cout<<"Student Name:"<<S1.Name<<endl;
  cout<<"Student CGPA:"<<S1.cgpa<<endl;
}





#include<iostream>
using namespace std;
class Student{ //Access Modifier/Specifier - Public, Private, Protected
public:
    string Name;
private:
    float cgpa;
};
int main(){
  Student S1;//S1 is an object of class Student
  S1.Name="ABC";
  S1.cgpa=3.44;
  cout<<"Student Name:"<<S1.Name<<endl;
  cout<<"Student CGPA:"<<S1.cgpa<<endl;
}






 #include<iostream>
using namespace std;
class Student{ //Access Modifier/Specifier - Public, Private, Protected
public:
    string Name;
    string ID;
private:
    float cgpa;
protected:
    int age;
public:
    void InputInfo(string nm,string id,float cg, int ag){ //Method
        Name=nm;
        ID=id;
        cgpa=cg;
        age=ag;
    }
    void PrintInfo(){
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student ID:"<<ID<<endl;
        cout<<"Student CGPA:"<<cgpa<<endl;
        cout<<"Student Age:"<<age<<endl;
    }

};
int main(){
Student S1;
S1.InputInfo("ABC","23-2345-3",3.55,21);
S1.PrintInfo();
}




#include<iostream>
using namespace std;
class A{ //Constructor,Destructor
private:
    int b;
public:
    A(){
        cout<<"Constructor Called"<<endl;
    }
    A(int a){
        b=a;
        cout<<"Parameterized Constructor Called"<<endl;
    }
    ~A(){
        cout<<"Destructor Called"<<endl;
    }

};
int main(){
    A a1;
    A a2(5);
    A a3;
}





 #include<iostream>
using namespace std;
class A{ //Constructor,Destructor
private:
    int b;
public:
    A(){
        cout<<"Constructor Called"<<endl;
    }
    A(int a){
        b=a;
        cout<<b<<" Parameterized Constructor Called"<<endl;
    }
    ~A(){
        cout<<b<<" Destructor Called"<<endl;
    }

};
int main(){
    A a1(10);
    A a2(5);
}




#include<iostream>
using namespace std;
class A{ //Constructor,Destructor
private:
    int b;
public:
    A(){
        cout<<"Constructor Called"<<endl;
    }
    A(int a){
        b=a;
        cout<<b<<" Parameterized Constructor Called"<<endl;
    }
    void Method_A(){
        cout<<"Method Called"<<endl;
    }
    ~A(){
        cout<<b<<" Destructor Called"<<endl;
    }

};
int main(){
    A a1(10);
    a1.Method_A();
    A a2(5);
    a2.Method_A();
}




 #include<iostream>
using namespace std;
class Student{
private:
    float cgpa;
public:
    Student(float cg){
        cgpa=cg;
    }
    ~Student(){
        cout<<"Student CGPA:"<<cgpa<<endl;
    }

};
int main(){
  Student S1(3.66);
}





 #include<iostream>
using namespace std;
class Account{
   double balance;
public:
    string Name;
void InputInfo(double blc, string nm){
    balance=blc;
    Name=nm;
}
void PrintInfo(){
    cout<<"Account Holder Name:"<<Name<<endl;
    cout<<"Account Balance:"<<balance<<endl;
}
void Transfer(Account *A,float amount){
    if(amount<=balance){
        balance=balance-amount;
        A->balance=A->balance+amount;
        cout<<"Transfer successful"<<endl;
    }
    else{
        cout<<"Transfer not possible"<<endl;
    }
}

};
int main(){
    Account A1;
    A1.InputInfo(10000, "ABC");
    A1.PrintInfo();
    Account A2;
    A2.InputInfo(60000,"DEF");
    A2.PrintInfo();
    A2.Transfer(&A1,2000);
    A1.PrintInfo();
    A2.PrintInfo();
}









