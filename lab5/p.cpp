#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'Z'){
            s[i] = 'a';
        } else if(s[i]=='z'){
            s[i]='a';
        }else{
            s[i] = s[i] + 1;     //сдвигаем символ на след в алфавите
        }

    }
    cout << s << endl;
    return 0;
}