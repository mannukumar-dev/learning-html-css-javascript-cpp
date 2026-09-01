// 🟡 Level 3 — Number Logic

// These are very important for college + programming fundamentals.

// Check whether a number is a palindrome.
// Input: 121
// Output: Palindrome
// Check whether a number is prime.
// Print all prime numbers from 1 to N. //doubts
// Find the largest digit in a number.
// Input: 58392
// Output: 9
// Find the smallest digit. 
// Count how many times a particular digit occurs.
// Input: 1223342
// Digit: 2
// Output: 3 //doubts

// Check Armstrong number.
// 153 → Armstrong
// Print Armstrong numbers from 1 to N.
// Find GCD of two numbers.
// Find LCM of two numbers.

#include <iostream>
using namespace std;

int main()
{

    // question 1: Check whether a number is a palindrome.
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int original_num = num;
    int reverse = 0;
    int last_digit;
    // while (num > 0)
    // {
    //     last_digit = num%10;
    //     reverse = reverse*10 + last_digit;
    //     num /= 10;

    // }

    // if (original_num == reverse)
    // {
    //     cout<<"Palindrome";
    // }
    // else
    // {
    //     cout<<"Not a Palindrome";
    // }

    // question 2: Check whether the number is prime or not.
    // bool isPrime = true;
    

    // if (num < 0)
    // {
    //     isPrime = false;
    // }
    // else
    // {
    //     for (int i = 2; i < num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }

    //     }
        
    // }

    // if (isPrime)
    // {
    //     cout << "Prime";
    // }
    // else
    // {
    //     cout << "Not a prime";
    // }

    
    //question 3:  Print all prime numbers from 1 to N.

    // for (int i = 2; i <= num; i++)
    // {
    //     bool isPrime = true;
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
            
    //     }
    //     if (isPrime)
    //     {
    //         cout<<i<<" ";
    //     }
        
        
    // }
    




    //question 4: Find the largest digit in a number.

    // int largest_digit = INT16_MIN;
    // int digit;
    // while (num > 0)
    // {
    //     digit = num%10;
    //     if (digit > largest_digit)
    //     {
    //         largest_digit = digit;
    //     }
        
    //     num /= 10;
    // }

    // cout<<largest_digit<<endl;


    // question 5: Find the smallest digit.
    // int smallest_digit = INT16_MAX;

    // while (num > 0)
    // {
    //     digit = num%10;
    //     if (digit < smallest_digit)
    //     {
    //         smallest_digit = digit;
    //     }
        
    //     num /= 10;
    // }

    // cout<<smallest_digit<<endl;


    //question 6: Count how many times a particular digit occurs.
    // Input: 1223342
    // Digit: 2  doubts

    // int digit;
    // cout<<"Enter the digit to count: ";
    // cin>>digit;
    // int count = 0;
    // while(num > 0)
    // {
    //     int last_digit = num%10;
    //     if(last_digit == digit)
    //     {
    //         count++;
    //     }  
    //     num /= 10; 
    // }

    // cout<<"The digit "<<digit<<" occurs "<<count<<" times."<<endl;



    //question 7: Check Armstrong number.
    // 153 → Armstrong


    int cube_sum = 0;
    
    // while(num > 0)
    // {
    //     int last_digit = num%10;
    //     cube_sum += last_digit*last_digit*last_digit;
    //     num /= 10;
    // }
    // if(cube_sum == original_num)
    // {
    //     cout<<original_num<<" is an Armstrong number."<<endl;
    // }
    // else
    // {
    //     cout<<original_num<<" is not an Armstrong number."<<endl;
    // }


    //question 8: Print Armstrong numbers from 1 to N.
    // for (int i = 1; i <= num; i++)
    // {
    //     int temp = i;
    //     cube_sum = 0;
    //     while(temp > 0)
    //     {
    //         int last_digit = temp%10;
    //         cube_sum += last_digit*last_digit*last_digit;
    //         temp /= 10;
    //     }
    //     if(cube_sum == i){
    //         cout<<i<<" ";
    //     } 
    // }



    //question 9: // Find GCD of two numbers. Find LCM of two numbers.

    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    

    
    

    return 0;
}