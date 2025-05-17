#include <iostream>

using namespace std;

int main(){
    int a;
    
    cin >> a;
    
    if (a % 2 == 0){
        cout << "EAGLE" << endl;
    } else {
        cout << "TAILS" << endl;
    }
    return 0;
}