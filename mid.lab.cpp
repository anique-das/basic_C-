#include <iostream>
using namespace std;

// Function to check if a number is prime
bool IsPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
// Function to store prime numbers in an array
void StorePrimeNumbers(int begins, int close, int primes[], int &primeCount)
{
    for (int i = begins; i <= close; i++)
    {
        if (IsPrime(i))
        {
            primes[primeCount++] = i;
        }
    }
}

// Function to print prime numbers from the array
void PrintPrimeNumbers(int primes[], int primeCount)
{


    cout << "Prime numbers are: ";
    for (int i = 0; i < primeCount; i++)
    {
        cout << primes[i] << " ";
    }

    cout << endl;


}

int main()
{
    int begins, close;
    cout << "Enter the begining range: ";
    cin >> begins;
    cout << "Enter the closing range: ";
    cin >> close;

    // Assuming the maximum number of prime numbers won't exceed 1000
    int maxPrimes = 500;
    int primes[maxPrimes];
    int primeCount = 0 ;

    // Store prime numbers in the array
    StorePrimeNumbers(begins, close, primes, primeCount);

    // Print prime numbers
    PrintPrimeNumbers(primes, primeCount);

    return 0;
}
































































/*#include <iostream>

// Function to check if a number is prime
bool IsPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to store prime numbers within a given range
void StorePrimeNumbers(int start, int end, int primes[], int& count) {
    for (int num = start; num <= end; ++num) {
        if (IsPrime(num)) {
            primes[count] = num;
            ++count;
        }
    }
}

// Function to print stored prime numbers
void PrintPrimeNumbers(const int primes[], int count) {
    std::cout << "Prime numbers within the given range: ";
    for (int i = 0; i < count; ++i) {
        std::cout << primes[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int start, end;
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    const int maxPrimes = 1000; // Adjust this based on your needs
    int primeNumbers[maxPrimes];
    int primeCount = 0;

    StorePrimeNumbers(start, end, primeNumbers, primeCount);
    PrintPrimeNumbers(primeNumbers, primeCount);

    return 0;
}*/

































































/*#include <iostream>
using namespace std;

int main()
{
    char gender;

    cout << "Enter gender: ";
    cin >> gender;


    if (gender == 'M')
    {
        cout << "Gender is Male" << endl;
    }
    else if (gender == 'F')
    {
        cout << "Gender is Female" << endl;
    }
    else
    {
        cout << "Undefined" << endl;
    }

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int numItems;
    double totalPrice = 0.0;

    cout << "Enter the number of items: ";
    cin >> numItems;

    for (int i = 1; i <= numItems; ++i) {
        double price;
        int quantity;

        cout << "Enter price of item " << i << ": $";
        cin >> price;

        cout << "Enter quantity of item " << i << ": ";
        cin >> quantity;

        totalPrice += price * quantity;
    }

    cout << "Total cost of items in the shopping cart: $" << totalPrice << endl;

    return 0;
}*/
























