#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' &&  s[i] <= 'z'){
            lower++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        }
    }
    cout << lower << " " << upper << endl;
}