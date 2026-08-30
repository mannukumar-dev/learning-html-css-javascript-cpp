#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operation you want between nubmers: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Result: "<< a << " + "<< b << " = " << a + b;
        break;
    
    case '-':
        cout<<"Result: "<< a << " - "<< b << " = " << a - b;
        break;

    case '*':
        cout<<"Result: "<< a << " X "<< b << " = " << a * b;
        break;

    case '/':
        if(b != 0){
            cout<<"Result: "<< a << " / "<< b << " = " << (float)a / b;
        }
        else{
            cout<<"Cannot divide by zero";
        }
        break;

    case '%':
        if(b != 0){
            cout<<"Result: "<< a << " % "<< b << " = " << a % b;
        }
        else{
            cout<<"Cannot divide by zero";
        }
        break;
    
    default:
        cout<< "Invalid operator";
        break;
    }

    return 0;
}