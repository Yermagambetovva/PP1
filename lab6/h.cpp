#include <iostream>
using namespace std;

void validnum(long long n) {
    bool isValid = true;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) { 
            isValid = false;
            break;
        }
        n /= 10; 
    }

    if (isValid) {
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    validnum(n);
    return 0;
}