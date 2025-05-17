#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m[n];
    for(int i = 0; i < n; ++i){
        cin >> m[i];
    }
    map <int, bool> x;
    for(int i = 0; i < n; ++i){
        int elem = m[i];
        if(x[elem]){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            x[elem] = true;
        }
    }
    return 0;
}