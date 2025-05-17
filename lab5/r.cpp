#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char t;
    cin >> s >> t;
    int first = -1, last = -1;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == t){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    if(first != -1 && first == last){
        cout << first;
    } else if(first != -1 && last != -1){
        cout << first << " " << last;
    }
    cout << endl;
    return 0;
}