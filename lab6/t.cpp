#include <iostream>
using namespace std;
void noc(int a[], int n, int k){
    int sum = 0;
    for(int i =0; i<n; ++i){
        sum += a[i];
    }
    sum /= n;
    cout << abs(sum - k);
}
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i <n; ++i){
        cin >> a[i];
    }
    noc(a, n, k);
    return 0;
}