#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int maxIndex = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = a[0]; 
    for(int i = 1; i < n; i++){
        if(a[i] > max) { 
            max = a[i]; 
            maxIndex = i;
        }
    }

    cout << maxIndex + 1 << endl;
    return 0;
}