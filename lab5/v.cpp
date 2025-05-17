#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; 
    getline(cin, s);                           //для считывания строки с пробелами
    for(int i=0;i<s.length(); i++){
        if(s[i]>='A' && s[i] < 'Z'){
            s[i]= s[i] + 1;
        }else if(s[i]=='Z'){
            s[i] = 'A';
        }else if(s[i]>='a' && s[i] < 'z'){
            s[i]=s[i] + 1;
        }else if(s[i]=='z'){
            s[i]='a';
        }
    }
    cout << s << endl;
    return 0;
}