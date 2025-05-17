#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, l, r;
    cin >> n >> l >> r;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    l--;
    r--;

    while(l < r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}