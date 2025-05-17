#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int i = 0;

    for(int j = 1; j < n; j++){
        if (a[j] != a[i]){
            i++;
            a[i] = a[j];
        }
    }

    for(int j = 0; j < i + 1; j++){
        cout << a[j] << " ";
    }

    return 0;
}