#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin >> s;
    int count = 0;
    char a = 'a';
    for(int i = 0; i < s.length(); i++){
        if(s[i] == a){
            count++;
        }
    }
    cout << a << " " << count << endl;
    return 0;
}