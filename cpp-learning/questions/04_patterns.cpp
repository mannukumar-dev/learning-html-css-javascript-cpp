// 🟡 Level 4 — Patterns

// These will make your nested-loop understanding much stronger.

// 1.
//     *
//     **
//     ***
//     ****
//     *****
// 2.

// *****
// ****
// ***
// **
// *
// 3.
//     1
//     12
//     123
//     1234
//     12345

// 4.
//     1
//     22
//     333
//     4444
//     55555
// 5.
//     *
//    ***
//   *****      //important
//  *******
// *********
// 6.
// *****
//  ****
//   ***   // important
//    **
//     *
// 7.
//     1
//     01
//     101      // IMportant 
//     0101
//     10101

#include <iostream>
using namespace std;

int main()
{
    // answer 1:
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;
    for(int i = 1; i <= num; i++){

        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // answer 2:
    for(int i = 0; i < num; i++){
        for(int j = num - i; j > 0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    // answer 3:
     for(int i = 1; i <= num; i++){
         for(int j = 1; j <= i; j++){
             cout<<j;
         }
         cout<<endl;
     }

    // answer 4:
     for(int i = 1; i <= num; i++){
         for(int j = 1; j <= i; j++){
             cout<<i;
         }
         cout<<endl;
     }

    // answer 5:
     for(int i = 0; i < num; i++){
         for(int j = num - i - 1; j > 0; j--){
             cout<<" ";
         }
         for(int k = 0; k < 2*i + 1; k++){
             cout<<"*";
         }
         cout<<endl;
     }

    // answer 6:
     for(int i = 0; i < num; i++){
         for(int k = 0; k < i; k++){
             cout<<" ";
         }
         for(int j = 0; j < num-i; j++){
             cout<<"*";
         }
         cout<<endl;
     }

    // answer 7:
    for (int i = 0; i < num; i++)
    {
        int value;

        if (i % 2 == 0)
            value = 1;
        else
            value = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << value;
            value = 1 - value;
        }

        cout << endl;
    }
    return 0;
}