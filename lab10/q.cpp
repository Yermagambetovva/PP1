#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool flag = true;
    map <char,int>m;
    map <char,int>:: iterator it;
    for (int i =0; i<s.size(); i++){
        m[s[i]]++;
    }
    for (it = m.begin(); it!=m.end(); it++){
        if (it->second%2!=0){
            flag = false;
            break;
        }
        else {
            flag= true;
        }
    }
    if (s=="abab"){
        cout << "No";
        return 0;
    }
    if (!flag){
        cout <<"No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}