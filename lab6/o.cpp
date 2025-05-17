#include <iostream>
using namespace std;
int sumofdigits(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    return sum;
}
void luckyTicket(int n){
    int sum = sumofdigits(n);
    if(sum % (n%10) == 0){
        cout << "Yes";
    }else {
        cout << "No";
    }
}
int main(){
    int n;
    cin >> n;
    luckyTicket(n);
    return 0;
}