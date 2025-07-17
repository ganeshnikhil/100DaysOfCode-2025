#include<iostream>

using namespace std;


int index_bit(int num , int index){
    int mask = 1 << index;
    return  mask | num;
}

int main(){
    int num , index;
    cout << "Enter num: ";
    cin >> num;

    cout<< "Enter index: ";
    cin >>index;

    int bit = index_bit(num , index);
    cout<<index<<"th index bit is : "<<bit<<endl;

}
