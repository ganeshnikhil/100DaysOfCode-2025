#include<iostream>

int Off_right_bit(int num){
    return num & (~1);  // sets rightmost bit to 0
}

int main(){
int num;

cout<<"Enter num: ";
cin>>num;

cout<<Off_right_bit(num)<<endl;
}