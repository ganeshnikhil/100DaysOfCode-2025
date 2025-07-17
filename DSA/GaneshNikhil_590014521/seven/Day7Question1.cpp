#include<iostream>
using namespace std;

bool isEven(int num) {
    return !(num & 1);
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is an even number" << endl;
    } else {
        cout << num << " is an odd number" << endl;
    }

    return 0;
}
