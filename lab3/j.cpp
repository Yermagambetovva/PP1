#include <iostream>
using namespace std;
int main(){
    int n;
    long long l, r;
    cin >> n >> l >> r;
    long long sum = 0;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = l - 1; i < r; i++){
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}