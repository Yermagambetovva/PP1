#include <iostream>
#include <string>
using namespace std;
void decToHex(int n){
    string result = "";
    while(n != 0){
        int remainder = 0;
        char c;
        remainder = n % 16;
        if(remainder < 10){
            c = remainder + 48;
        }else{
            c = remainder + 55;
        }
        result += c;
        n /= 16;
    }
    int i = 0, j = result.length() - 1;
    while(i <= j){
        swap(result[i], result[j]);
        i++;
        j--;
    }
    cout << result;
}
int main(){
    int n;
    cin >> n;
    decToHex(n);
    return 0;
}