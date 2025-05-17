//witout "."
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Loop for each level of the tree
    for (int i = 1; i <= n; ++i) {
        // Print spaces to center the stars
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
    
    return 0;
}