#include <iostream>
#include <string>
using namespace std;
void removevowels(string s){
    string result = "";
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
            continue;
        }else{
            result = s[i];
        }
        cout << result;
    }
}
int main(){
    string s;
    getline(cin, s);
    removevowels(s);
    return 0;
}