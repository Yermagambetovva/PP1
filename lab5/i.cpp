#include <iostream>
#include <string>
using namespace std;
int main(){
    string S;
    cin >> S;
    int sum = 0;
    for(int i = 0; i<S.length(); i++){
        sum += S[i];
    }
    if(sum > 300){
        cout << "It is tasty!" << endl;
    } else {
        cout << "Oh, no!" << endl;
    }
    return 0;
}