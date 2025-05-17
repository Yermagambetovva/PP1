#include <iostream>
using namespace std;
int main() {
    long int n,c,d;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin >> c;
        a[i]=c;
    }
    cin >> d;
    if(d<=0){
        for(int i = d*(-1); i<n; ++i){
            cout << a[i] << " ";
        }
        for(int i = 0; i<(d*(-1)); ++i){
            cout << a[i] << " ";
        }
    }
    else{
        for(int i = n-d; i<n; ++i){
            cout << a[i] << " ";
        }
        for(int i = 0; i<n-d; ++i){
            cout << a[i] << " ";
        }
    }
    return 0;
}