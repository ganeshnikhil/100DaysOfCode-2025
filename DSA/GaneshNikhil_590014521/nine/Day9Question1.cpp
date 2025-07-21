// C++ program to find whether
// a given number is power of 2
#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    
    // Check if n is positive and n & (n-1) is 0
    return (n > 0) && ((n & (n-1)) == 0);
}

int main() {
    int n = 16;
    if (isPowerofTwo(n)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}