#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string binary = "";
    if (n == 0) {
        binary = "0";
    } else {
        while (n > 0) {
            binary = to_string(n % 2) + binary;
            n /= 2;
        }
    }

    cout << binary << endl;
    return 0;
}
