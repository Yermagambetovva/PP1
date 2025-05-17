#include <iostream>
using namespace std;
void positiveNumber(int n){
    cout << abs(n) << endl;
}
int main(){
    int n;
    cin >> n;
    positiveNumber(n);
    return 0;
}