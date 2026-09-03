

// question 1: Create a function to check even/odd.
// question 2: Create a function to find the maximum of two numbers.
// question : Create a function to find the maximum of three numbers.
// question : Create a function to calculate factorial.
// question : Create a function to check prime.
// question : Create a function to reverse a number.
// question : Create a function to check palindrome.
// question : Create a function to calculate GCD.
// question : Create a function to calculate LCM.
// question : Create a function to calculate power:

#include <iostream>
using namespace std;

// answer 1:
void checkEvenOdd(int n)
{

    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
}




int main()
{
    checkEvenOdd(5);
    return 0;
}