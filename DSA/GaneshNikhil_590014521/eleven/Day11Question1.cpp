#include<iostream>

using namespace std;

bool haveOppositeSigns(int a, int b) {
    return (a ^ b) < 0;
}

int main(){
    int a , b;

    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<haveOppositeSigns(a , b)<<endl;
}