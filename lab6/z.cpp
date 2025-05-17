#include <iostream>
using namespace std;
void ali(string s){
    if(s.length() == 1 && atoi(s.c_str()) == 1){
        cout << "true";
    }else if(s.length() == 1 && atoi(s.c_str()) == 0){
        cout << "false";
    }else{
        cout << s;
    }
}
int main(){
    string s;
    cin >> s;
    ali(s);
    return 0;
}