#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // question 1: swap the number 
    int a, b;
    cout<<"Enter the a number: ";
    cin>>a;
    cout<<"Enter the b number: ";
    cin>>b;
    int temp;
    temp = a; //a value
    a = b; //a replace with b
    b = temp; //we store the original value of a in temp which is replace by b
    cout<<"a: "<<a<<", b: "<<b<<" This method done with the help of third variable"<<endl;
    int x, y;//10, 20
    cout<<"Enter the x number: ";
    cin>>x;
    cout<<"Enter the y number: ";
    cin>>y;
    x = x + y; //30   
    y = x - y;//30-20 = 10
    x = x - y;//30-10=20

    cout<<"x: "<<a<<", y: "<<b<<" This method done without the help of third variable"<<endl;


    //question 2: Take temperature in Celsius and convert into Fahrenheit
    float cel, fah;
    cout<<"Enter the temperature in clesius: ";
    cin>>cel;
    fah = (cel * 9/5)+35;
    cout<<"Celsius "<< cel<<" Fahrenheit "<< fah<<endl;


    //question 3: Simple Interest
    float p, r, t;
    cout<<"Enter the principal: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time period in years: ";
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"Your simple interest is: "<<si<<endl;


    // question 4: make the report card according to the students marks

    char name[50];
    int maths, physics, chemistry, hindi, english;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter Maths marks: ";
    cin >> maths;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Chemistry marks: ";
    cin >> chemistry;

    cout << "Enter Hindi marks: ";
    cin >> hindi;

    cout << "Enter English marks: ";
    cin >> english;

    int obtained_marks = maths + physics + chemistry + hindi + english;
    int total_marks = 500;

    float percentage = ((float)obtained_marks / total_marks) * 100;

    cout << "\n----- Marksheet -----\n";
    cout << "Name: " << name << endl;
    cout << "Total: " << obtained_marks << " out of " << total_marks <<endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;

    
   
    
    return 0;
}