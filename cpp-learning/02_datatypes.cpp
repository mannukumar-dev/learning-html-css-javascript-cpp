#include <iostream>
using namespace std;

int main() {
    //variable & Naming Convention data types , size

    int age = 12;
    char ch = 'A';
    float pi = 3.14;
    bool isTrue = true;
    double salary = 10000.33333;
    long long population = 1000000000;
    void functionName(); // function declaration

    cout<<sizeof(age)<<endl; // size of int




    // Naming style
    // 1. Pascal Case
    int StudentRecord = 100;
    // 2. Camel Case
    int totalMarks = 500;
    //3. snake case
    int marks_math = 90;


    //indentifier and literal: An identifier is a name given to a variable, function, or other entity in a program, while a literal is a fixed value that is directly represented in the code. For example, in the statement "int age = 12;", "age" is an identifier and "12" is a literal.


    //type casting: Type casting is the process of converting a value from one data type to another. In C++, there are two types of type casting: implicit and explicit. Implicit type casting occurs automatically when a value is assigned to a variable of a different data type, while explicit type casting requires the use of a cast operator to convert the value.


    int x = 10;
    double y = x; // implicit type casting
    int z = (int)y; // explicit type casting. In explicit data is losing because direction of casting is from higher data type to lower data type. In this case double to int. So, we need to use explicit type casting.


    
    return 0;
}