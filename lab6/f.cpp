#include <iostream>
#include <string>
using namespace std;
void validstring(string s, int n){
    int counter = 0;
    for(int i=0;i<s.length();++i){
        if(isdigit(s[i])){
            counter++;
        if(counter >= n){
            cout << "YES" <<endl;
            return;
        }
        }
    }

    cout << "NO"<<endl;
}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    validstring(s,n);
    return 0;
}