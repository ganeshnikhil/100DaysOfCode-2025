#include<iostream>

using namespace std;


void swap(int& a , int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    return;
}

int main(){
    int a , b;

    cout<<"Enter a and b: ";
    cin>>a>>b;
    
    cout<<"Initial"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    swap(a , b);
    cout<<"Final"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return 0;
}