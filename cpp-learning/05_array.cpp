#include <iostream>
#include <iomanip>
using namespace std;


void maxMinVal (int arr[], int n){
    int max = arr[0], min = arr[0];
    
    for (int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout<<"Max: "<<max<<" Min: "<<min<<endl;
}

int main() {
    int arr[5];
    int sum = 0;
    
    for(int i = 0; i < 5; i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>arr[i];
    }
    cout<<"Array elements: ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // for (int i = 0; i < 5; i++){
    //     sum+= arr[i];
    // }
    // cout<<"Sum: "<<sum<<"\n";

    // double avg = static_cast<double>(sum)/5;
    // cout<<"Average: "<< fixed<<setprecision(2)<<avg<<endl;

    maxMinVal(arr, 5);

    return 0; 
    
}