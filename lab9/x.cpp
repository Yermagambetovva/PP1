#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string symbol;
    cin >> symbol;  
    sort(symbol.begin(), symbol.end(), greater<char>());
    do {
        cout << symbol;  
    } while (prev_permutation(symbol.begin(), symbol.end()));  
    cout << endl;  
    return 0;
}
