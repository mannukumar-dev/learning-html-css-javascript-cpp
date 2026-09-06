

// question 1: Create a function to check even/odd.
// question 2: Create a function to find the maximum of two numbers.
// question 3: Create a function to find the maximum of three numbers.
// question 4: Create a function to calculate factorial.
// question 5: Create a function to check prime.
// question 6: Create a function to reverse a number.
// question 7: Create a function to check palindrome.
// question : Create a function to calculate GCD.
// question : Create a function to calculate LCM.
// question 10: Create a function to calculate power:

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

// answer 2: 
void max_of_two(int a, int b){
    int max;
    if(a >= b){
        max = a;
    }
    else{
        max = b;
    }
    
    cout<<max<<" is greater"<<endl;
}
//answer 3:

void max_of_three(int a, int b, int c){
    int max;
    if(a >= b && a >= c) max = a;
    else if(b >= a && b >= c) max = b;
    else max = c;
    cout<<max<<" is a greatest number"<<endl;
}


//answer 4:
void factorial(int n){
    int fact = 1;
    for (int i = n; i > 0; i--){
        fact *= i;
    }  
    cout<<"factorial of "<<n<<" is "<<fact<<endl; 
    
}

//answer 5:
void checkPrime(int n){
    bool isPrime = true;
    if(n <=1 ) isPrime = false;
    
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }   
    } 
    
    cout<<boolalpha<<isPrime<<endl;
}

// answer 6: 
void reverseNumber(int n){
    int rev = 0;
    int org = n;
    while(n > 0){
        int last_digit = n % 10;
        rev = rev*10 + last_digit;
        n /= 10;

    }
    cout<<"Reverse value of "<< org <<" is this "<<rev<<endl;
}


//answer 7:
void palindromeNumber(int n){
    bool isPalindrome = true;
    int rev = 0;
    int org = n;
    while(n > 0){
        int last_digit = n % 10;
        rev = rev*10 + last_digit;
        n /= 10;
    }
    if(rev != org){
        isPalindrome = false;
    }
    cout<<boolalpha<<isPalindrome<<endl;
}

//answer 8:
int gcd(int a, int b){
    while (b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

//answer 9:
int lcm(int a, int b){
    return (a*b)/gcd(a, b);
    
}



//answer 10:
void power(int a, int b){
    
    int power = 1;
    for(int i = 0; i < b; i++){
        power*=a;
    }
    cout<<a<<"^"<<b<<" = "<<power<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    checkEvenOdd(5);
    max_of_two(3, 2);
    max_of_three(2, 5, 4);
    factorial(4);
    checkPrime(4);
    checkPrime(n);
    reverseNumber(n);
    palindromeNumber(n);
    cout<<"GCD "<<gcd(12, 18)<<endl;
    cout<<"LCM "<<lcm(12, 18)<<endl;
    power(2, 3);
    return 0;
}