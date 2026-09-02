// question 1: swap the number with and without the help of third variable.
// question 2: Take temperature in Celsius and convert into Fahrenheit and vice-versa.
// question 3: Find Simple Interest formula (principal*rate*time)/100.
// question 4: make the report card according to the students marks.
// question 5: Find the largest of three numbers.
// question 6: Check whether a number is positive, negative, or zero.
// question 7: Check whether a number is even or odd.
// question 8: Take a year as input and check whether it is a leap year.
// question 9: Take a character from the user and check whether it is a vowel or consonant. User both switch as well as if-else.
// question 10: Find the month name as user month number. Use switch as well as if-else.
// question 11: Given a purchase amount p, calculate and print the final amount after applying the discount based on the following slab: Purchase Amount Discount Less than 500 No discount (0%) 500 to 999 5% discount 1000 to 4999 10% discount 5000 to 9999 20% discount 10000 and above 30% discount This problem reinforces your understanding of multi-branch if-else if conditions with range-based checks — a very common real-world pattern. This problem reinforces your understanding of multi-branch if-else if conditions with range-based checks — a very common real-world pattern.

// question 12: Given the number of units of electricity consumed u, calculate and print the total electricity bill based on the following slab-rate system: Units Consumed Rate per Unit First 100 units ₹1.50 per unit Next 100 units (101–200) ₹2.50 per unit Next 100 units (201–300) ₹4.00 per unit Above 300 units ₹5.00 per unit A fixed surcharge of ₹50 is added to every bill regardless of consumption. This problem teaches cumulative slab-based calculation — each slab charges only the units that fall within that range, not the entire consumption at that rate.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // question 1: swap the number
    int a, b;
    cout << "Enter the a number: ";
    cin >> a;
    cout << "Enter the b number: ";
    cin >> b;
    int temp;
    temp = a; // a value
    a = b;    // a replace with b
    b = temp; // we store the original value of a in temp which is replace by b
    cout << "a: " << a << ", b: " << b << " This method done with the help of third variable" << endl;
    int x, y; // 10, 20
    cout << "Enter the x number: ";
    cin >> x;
    cout << "Enter the y number: ";
    cin >> y;
    x = x + y; // 30
    y = x - y; // 30-20 = 10
    x = x - y; // 30-10=20

    cout << "x: " << a << ", y: " << b << " This method done without the help of third variable" << endl;

    // question 2: Take temperature in Celsius and convert into Fahrenheit
    float cel, fah;
    cout << "Enter the temperature in clesius: ";
    cin >> cel;
    fah = (cel * 9 / 5) + 32;
    cout << "Celsius " << cel << " Fahrenheit " << fah << endl;

    // question 3: Simple Interest
    float p, r, t;
    cout << "Enter the principal: ";
    cin >> p;
    cout << "Enter the rate: ";
    cin >> r;
    cout << "Enter the time period in years: ";
    cin >> t;
    float si = (p * r * t) / 100;
    cout << "Your simple interest is: " << si << endl;

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
    cout << "Total: " << obtained_marks << " out of " << total_marks << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;

    // question 5: Find the largest of three numbers.
    int num1, num2, num3;
    cout << "Enter the num1: ";
    cin >> num1;
    cout << "Enter the num2: ";
    cin >> num2;
    cout << "Enter the num3: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is the greatest of all the three number";
    }
    else if (num2 > num3 && num2 > num1)
    {
        cout << num2 << " is the greates of all the three number";
    }
    else
    {
        cout << num3 << " is the greates of all the three number";
    }

    // question 6: Check whether a number is positive, negative, or zero.
    int num1;
    cout << "Enter the num1: ";
    cin >> num1;
    if (num1 > 0)
    {
        cout << "Number is positive";
    }
    else if (num1 < 0)
    {
        cout << "Number is negative";
    }
    else
    {
        cout << "Number is zero";
    }

    // question 7: Check whether a number is even or odd.
    int num;
    cout << "Enter the num1: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }

    // question 8: Take a year as input and check whether it is a leap year.

    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << year << " is not a leap year";
    }

    // question 9: Take a character from the user and check whether it is a vowel or consonant.
    char ch;
    cout << "Enter a charcter: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is a vowel";
    }
    else
    {
        cout << ch << " is a consonant";
    }

    // question 10: Find the month name as user month number. Use switch as well as if-else.

    int month;
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        cout << "Invalid month";
        break;
    }

    // answer 11:
    float amount;
    float discount, finalAmt;
    cin >> amount;
    if (amount > 0 && amount < 500)
    {
        discount = 0;
    }
    else if (amount >= 500 && amount <= 999)
    {
        discount = 0.05;
    }
    else if (amount >= 1000 && amount <= 4999)
    {
        discount = 0.1;
    }
    else if (amount >= 5000 && amount <= 9999)
    {
        discount = 0.2;
    }
    else
    {
        discount = 0.3;
    }
    finalAmt = amount - (amount * discount);
    cout << fixed << setprecision(2) << finalAmt;

    // answer 12:
    int unit;
    float amount = 50;
    cin >> unit;
    if (unit > 300)
    {
        unit -= 300;
        amount += unit * 5.0;
        unit = 300;
    }
    if (unit > 200 && unit <= 300)
    {
        unit -= 200;
        amount += unit * 4.0;
        unit = 200;
    }
    if (unit > 100 && unit <= 200)
    {
        unit -= 100;
        amount += unit * 2.5;
        unit = 100;
    }
    amount += unit * 1.5;
    cout << fixed << setprecision(2) << amount << endl;

    return 0;
}