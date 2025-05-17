#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;
int main () {
    int arr [1001];
    for(int i = 0;i < 1001;i++) arr[i] = 0;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    int maxi = INT_MIN;
    for (int i = 0; i < 1001;i++){
        maxi = max(maxi,arr[i]);
    }
    int arr1[n];
    for(int i = 0;i < n;i++) arr1[i] = 0;
    int j = 0;
    for(int i = 0;i < 1001;i++){
        if(arr[i] == maxi) {
            arr1[j] = i;
            j++;
        }
    }
    reverse(arr1,arr1 + n);
    for(int i = 0;i < n;i++){
        if(arr1[i] > 0) cout << arr1[i] << ' ';
    }
}