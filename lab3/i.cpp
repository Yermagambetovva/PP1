#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxVal) {
            arr[i] = minVal;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
   return 0;
}