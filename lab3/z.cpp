#include <iostream>
#include <numeric>
using namespace std;

int main() {
    
    int n, x = 0;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            x = max(x, gcd(arr[i], arr[j]));
        }
    }
    
    cout << x;
    
    return 0;
}