#include <iostream>
using namespace std;

int main() {

    // Output
    cout << "Hello, World!" << endl;
    cout << "C++ Learning Journey" << "\n";

    // Integer input
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age << endl;

    // Multiple inputs
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "First number: " << x << endl;
    cout << "Second number: " << y << endl;

    // Different data types
    string name;
    double salary;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;


     
    int a = 20;
    int b = 6;

    // arithmetic operations
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    // comparison operations
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // preincrement and postincrement
    cout << "Initial: " << a << endl;

    // Pre-increment
    cout << "Pre-increment: " << ++a << endl;

    // Post-increment
    cout << "Post-increment: " << a++ << endl;

    cout << "After post-increment: " << a << endl;

    // Pre-decrement
    cout << "Pre-decrement: " << --a << endl;

    // Post-decrement
    cout << "Post-decrement: " << a-- << endl;

    cout << "After post-decrement: " << a << endl;


    return 0;
}