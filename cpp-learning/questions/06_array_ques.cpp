//ques 1:  Maximum/minimum
//ques 2:  Reverse array
//ques 3:  Search element
//ques 4:  Print even/odd
//ques 5: Count positive/negative
//ques 6: Sort array
//ques 7: Second largest
//ques 8: Duplicate elements
//ques 9: Merge arrays
//ques 10: Rotation


#include <iostream>
#include <vector>
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

//answer 4:
void printEvenOdd(int arr[], int lenght){
    vector<int> even;
    vector<int> odd;
    for(int i = 0; i < lenght; i++){
        if(arr[i] % 2 == 0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    cout<<"Even no.: ";
    for(int i = 0; i < even.size(); i++){
        cout<<even[i]<<" ";
    }
    cout<<"\nOdd no.: ";
    for(int i = 0; i < odd.size(); i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    
}


//answer 5:
void countPositiveNegative(int arr[], int length){
    int countPositive = 0;
    int countNegative = 0;

    for(int i = 0; i < length; i++){
        if(arr[i] < 0){
            countNegative++;
        }
        else{
            countPositive++;
        }
    }

    cout<<"Positive numbers: "<<countPositive<<endl;
    cout<<"Odd numbers: "<<countNegative<<endl;
}

//answer 6:
void sortArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"sorted array: ";
    for (int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//answer 7:
void secondLargest(int arr[], int length){
    int largest = arr[0];
    int second_largest = arr[0];
    for (int i = 0; i < length; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest = arr[i];
        }
    }
    cout<<"Second largest no.: "<<second_largest<<endl;
    
}

//answer 8:
void duplicateElement(int arr[], int length){
    cout<<"Duplicate element: ";
    for (int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}

// answer 9:
void mergeArray(int arr1[], int arr2[], int n1, int n2, int merge[]){
    cout<<"Array_1 element: ";
    for(int i = 0; i < n1; i++){
        cout<<arr1[i]<<" ";
        merge[i] = arr1[i];
    }
    cout<<"\nArray_2 element: ";
    for(int i = 0; i < n2; i++){
        cout<<arr2[i]<<" ";
        merge[n1 + i] = arr2[i];
    }
    cout<<"\nMerge Array: ";
    for(int i = 0; i < n1 + n2; i++){
        cout<<merge[i]<<" ";
    }
}

int main() {
    
    // int arr[100];
    // int length, target;
    // cout<<"Enter the length of array: ";
    // cin>>length;

    // cout<<"Enter the target you want to find: ";
    // cin>>target;
    // for(int i = 0; i < length; i++){
    //     cout<<"Enter the "<<i+1<<" number: ";
    //     cin>>arr[i];
    // }
    // cout<<"Element: ";
    // for (int i = 0; i < length; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;


    
    // maxMinVal(arr, length);
    // reverseArray(arr, length);
    // searchElement(arr, length, target);
    // printEvenOdd(arr, length);
    // countPositiveNegative(arr, length);
    // sortArray(arr, length);
    // secondLargest(arr, length);
    // duplicateElement(arr, length);

    int arr1[4] = {12, 23, 43, 44};
    int arr2[4] = {32, 45, 76, 85};
    int merge[8];
    
    mergeArray(arr1, arr2, 4, 4, merge);

    
    return 0;
}