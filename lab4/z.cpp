#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {  //в условии указали от 1
        for (int j = 0; j < i; j++) {
            cout << "[*]";
        }
        cout << endl; 
    }
    return 0;
}