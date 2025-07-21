#include<iostream>

using namespace std;

int isolate_right_bit(int num){
    int isolate_rightmost_one(int num) {
    return num & -num;
}

int main(){
int num;

cout<<"Enter num: ";
cin>>num;

cout<<isolate_right_bit(num)<<endl;
}