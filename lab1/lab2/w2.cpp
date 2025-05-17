#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    cin >> n;
    cout << (__builtin_ctz(n)) << endl;
    return 0;
}