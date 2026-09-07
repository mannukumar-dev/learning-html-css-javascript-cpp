// question 1: Print numbers from 1 to N, N to 1, even number, odd number, sum of 1 to N, factorial, mulitiplication table, count a digit, sum of digits, reversed the number

// question 2: Given a non-negative integer N, print the first N terms of the Fibonacci series. The Fibonacci series starts with: 0 1 Each subsequent number is the sum of the previous two numbers. For example, the first 7 terms are: 0 1 1 2 3 5 8 Print all terms on a single line, separated by a space.

// question 3: Given a positive integer n, check whether the number is automorphic or not. A number is called automorphic if its square ends with the number itself. Examples: 25² = 625 → ends with 25 → Automorphic 76² = 5776 → ends with 76 → Automorphic 7² = 49 → does not end with 7 → Not Automorphic

// question 4: Given a non-negative integer N, check whether it is a Strong Number using a while loop. A number is called a Strong Number if the sum of the factorials of its individual digits is equal to the original number. For example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 Therefore, 145 is a Strong Number. Print "Strong Number" if the number satisfies this condition; otherwise, print "Not a Strong Number".

#include <iostream>
using namespace std;

int main()
{
    // Answer 1: Print numbers from 1 to N, N to 1, even number, odd number, sum of 1 to N, factorial, mulitiplication table, count a digit, sum of digits, reversed the number
    int N;
    cout << "Enter the number: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }

    for (int i = N; i > 0; i--)
    {
        cout << i << endl;
    }

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 to " << N << " is = " << sum << endl;

    int fact = 1;
    for (int i = N; i > 0; i--)
    {
        fact *= i;
    }
    cout << "Factorial of " << N << " is = " << fact << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << N << " X " << i << " = " << N * i << endl;
    }

    int count = 0;
    while (N > 0)
    {
        N /= 10;
        count++;
    }
    cout << count << endl;

    int sum = 0;
    int last_digit;
    int org = N;
    while (N > 0)
    {
        last_digit = N % 10;
        N /= 10;
        sum += last_digit;
    }
    cout << "Sum of digits in a " << org << " = " << sum;

    int reverse = 0;
    int org = N;
    int last_digit;
    while (N > 0)
    {
        last_digit = N % 10;
        reverse = reverse * 10 + last_digit;
        N /= 10;
    }

    cout << "Reverse of " << org << " is " << reverse;

    // answer 2:
    int first = 0, second = 1, next = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    // answer 3:
    int n1;
    cin >> n1;
    int square = n1 * n1;
    int Automorphic = 1; // true
    while (n1 > 0)
    {
        if (n1 % 10 != square % 10)
        {
            Automorphic = 0;
        }

        n1 /= 10;
        square /= 10;
    }
    if (Automorphic == 1)
    {
        cout << "Automorphic" << endl;
    }
    else
    {
        cout << "Not Automorphic" << endl;
    }

    // answer 4:
    int n2;
    cin >> n2;
    int fact = 1, sum = 0;
    int org = n2;

    if (n2 == 0)
    {
        cout << "Not a Strong Number";
        return 0;
    }

    while (n2 > 0)
    {
        int last_digit = n2 % 10;
        for (int i = last_digit; i > 0; i--)
        {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        n2 /= 10;
    }
    if (org == sum)
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not a Strong Number";
    }

    return 0;
}