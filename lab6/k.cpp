#include <iostream>
using namespace std;
void sum(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    cout << sum;
}
int main(){
    int n;
    cin >> n;
    sum(n);
    return 0;
}