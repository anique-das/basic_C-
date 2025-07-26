#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout << "Enter a name: ";
    cin.getline(name, 100);
    cout << "You entered: " << name << endl;
    return 0;
}


