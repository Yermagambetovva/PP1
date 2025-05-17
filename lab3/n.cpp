#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int arr1[n];  
    for (int i=0; i < n; i++) {
        cin >> arr1[i]; 
    }
    cin >> m;
    int arr2[m];
    for (int i=0; i < m; i++) {
        cin >> arr2[i];
    } 
    int arr3[n+m];
    for (int i=0; i < n; i++) {
        arr3[i] = arr1[i]; 
    }
    for (int i=0; i < m; i++) {
        arr3[n + i] = arr2[i]; 
    }
    sort(arr3, arr3 + n + m);

    for (int i=0; i < n+m; i++) {
        if (i>0) cout << " ";
        cout << arr3[i];
    }
    return 0;
}