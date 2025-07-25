#include <iostream>
using namespace std;

// Function prototypes
void Operations(int choice);
void Circle();
void Rectangle();
void Triangle();
void Square();
void showResults(double area);

int main()
{
    int choice;

    // Display options to the user
    cout << "Choose an option:"<<endl;
    cout << "1. Circle"<<endl;
    cout << "2. Rectangle"<<endl;
    cout << "3. Triangle"<<endl;
    cout << "4. Square"<<endl;
    cout << "5. End Program"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Check for invalid input
    if (choice < 1 || choice > 5)
    {
        cout << "Invalid choice! Please enter a number between 1 to 5."<<endl;
    }
    else if (choice == 5)
    {
        cout<<"Program ended"<<endl;
    }

    // Call Operations function
    Operations(choice);
    return 0;
}




// Function to perform selected operation based on user choice
void Operations(int choice)
{
    switch (choice)
    {
    case 1:
        Circle();
        main();
        break;
    case 2:
        Rectangle();
        main();
        break;
    case 3:
        Triangle();
        main();
        break;
    case 4:
        Square();
        main();
        break;

    }
}

// Function to calculate the area of a Circle
void Circle()
{
    double radius, area;
    cout << "Enter radius of the Circle: ";
    cin >> radius;
    area = 3.1416 * radius * radius;
    showResults(area);


}

// Function to calculate the area of a Rectangle
void Rectangle()
{
    double length, width, area;
    cout << "Enter length of the Rectangle: ";
    cin >> length;
    cout << "Enter width of the Rectangle: ";
    cin >> width;
    area = length * width;
    showResults(area);

}

// Function to calculate the area of a Triangle
void Triangle()
{
    double base, height, area;
    cout << "Enter base length of the Triangle: ";
    cin >> base;
    cout << "Enter height of the Triangle: ";
    cin >> height;
    area = 0.5 * base * height;
    showResults(area);
}

// Function to calculate the area of a Square
void Square()
{
    double side, area;
    cout << "Enter side length of the Square: ";
    cin >> side;
    area = side * side;
    showResults(area);

}

// Function to display area result
void showResults(double area)
{
    cout << "Area: " << area << endl;
}

