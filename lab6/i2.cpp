#include <iostream>
#include <string>
using namespace std;
void capitalletter(string s){
    for(int i =0; i<s.length(); ++i){
        if(i % 2 ==0){
           s[i] = toupper(s[i]);
        }
        cout << s[i];
    }
}
int main(){
    string s;
    cin >> s;
    capitalletter(s);
}