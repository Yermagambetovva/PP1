#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) return false;  // 1 и все числа меньше 1 не простые
    if (n == 2) return true;   // 2 - простое число
    if (n % 2 == 0) return false;  // четные числа, кроме 2, не простые
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;  // если n делится на i, то не простое
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (is_prime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}