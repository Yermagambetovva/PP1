#include <iostream>
using namespace std;
int main (){
    
    int n, m;
    cin >> n >> m;
    
    if(m >= 0.8*n){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}