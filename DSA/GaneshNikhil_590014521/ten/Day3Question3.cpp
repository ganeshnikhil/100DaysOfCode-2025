#include<iostream>
#define MAX_SIZE 100

using namespace std;

int xor_arr(int arr[] , int size){
    int result = 0;
    for(int i=0 ; i < size ; i++){
        result ^= arr[i];
    }
    return result;
}


int main() {
    int arr[MAX_SIZE] , size;
    cout<<"Enter size of arr: ";
    cin>>size;
    
    cout<<"Enter "<<size<<" Elements in arr:"<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    cout << xor_arr(arr, size) << endl;  // Output: 2
    return 0;
}