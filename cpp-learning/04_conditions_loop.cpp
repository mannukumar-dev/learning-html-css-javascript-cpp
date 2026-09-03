#include <iostream>
using namespace std;

int main() {
    int a = 4, b =6;
    if(a>b){
        cout<<a<<endl;
    }
    else {
        cout<<b<<endl;
    }
    int max = a<b?a:b;
    cout<<max<<endl;


    //switch loop
    int day = 1;
    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    
    default:
        break;
    }

    //for loop
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;
    }

    // while (a > 0)
    // {
    //     cout<<a<<endl;
    //     a--;
    // }

    do
    {
        cout<<a<<endl;
        a--;
    } while (a>0);
    
    
    

    return 0;
}