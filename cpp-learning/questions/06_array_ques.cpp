//ques 1:  Maximum/minimum
//ques 2:  Reverse array
//ques 3:  Search element
//ques 4:  Count even/odd
//ques 5: Count positive/negative
//ques 6: Sort array
//ques 7: Second largest
//ques 8: Duplicate elements
//ques 9: Merge arrays


#include <iostream>
using namespace std;

// answer 1:
void maxMinVal(int arr[], int length){
    int max = arr[0], min = arr[0];
    for (int i = 0; i < length; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        
    }
    cout<<"Max: "<<max<<" Min: "<<min<<"\n";
}

//answer 2:
void reverseArray(int arr[], int length){
    cout<<"Reverse array: ";
    int start = 0, end = length-1;
    while (start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"Reverse: ";
    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}

//answer 3:
void searchElement(int arr[], int length, int target){
    int foundAt = -1;
    for(int i = 0; i < length; i++){
        if(arr[i] == target){
            foundAt = i;
            break;
        }
    }
    if(foundAt != -1){
        cout<<"Found "<<target<<" at index "<<foundAt<<endl;
    }
    else{
        cout<<target<<" is not found"<<endl;
    }
}


int main() {
    
    int arr[100];
    int length, target;
    cout<<"Enter the length of array: ";
    cin>>length;

    cout<<"Enter the target you want to find: ";
    cin>>target;
    for(int i = 0; i < length; i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>arr[i];
    }
    cout<<"Element: ";
    for (int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    
    // maxMinVal(arr, length);
    // reverseArray(arr, length);
    searchElement(arr, length, target);

    
    return 0;
}