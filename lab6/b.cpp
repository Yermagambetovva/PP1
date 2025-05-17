#include <iostream>
#include <cmath>   //abs для модуля
using namespace std;
void difference(int a[], int b[], int n){
    for(int i=0;i<n;++i){
        cout << abs(a[i] - b[i]);
    }
}
int main(){
    int n;
    cin >> n;
    int a[n], b[n], d[n];
    for(int i =0; i <n ; ++i){
        cin >> a[i];
    }
    for(int i =0; i <n ; ++i){
        cin >> b[i];
    }
    for(int i =0; i <n ; ++i){
        cout << abs(a[i]-b[i]) << " ";
    }
    cout << endl;
    return 0;
}