#include<iostream>
#define MAX_SIZE 100

using namespace std;

int Non_repeating(int arr[] , int size){
    int op = 0;
    for(int i=0 ; i < size ; i++){
        op ^= arr[i];
    }
    return op;
}


int main() {
    int arr[MAX_SIZE] , size;
    cout<<"Enter size of arr: ";
    cin>>size;
    
    cout<<"Enter "<<size<<" Elements in arr:"<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    cout << Non_repeating(arr, size) << endl;  // Output: 2
    return 0;
}