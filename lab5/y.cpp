#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int vowel = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i]== 'e' || s[i] == 'i' || s[i]=='o' || s[i] =='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
            vowel++;
        }
    }
    cout << vowel << endl;
    return 0;
}