#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    
    int n = ~x;

    n = n & 0xFF;

    cout << n << endl;

    return 0;
}
