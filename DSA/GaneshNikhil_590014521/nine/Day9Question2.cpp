#include <iostream>
using namespace std;


int mult_two(int num){
    return num << 1;
}


nt main() {
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"multiply 2 in "<<num<<" "<<mult_two(num)<<endl;
}