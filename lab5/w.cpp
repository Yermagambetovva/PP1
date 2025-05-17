#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if(s.find(t) != string::npos){           //для обозначения подстрока или символ не былт найдены в строке при исползовании файнд
         cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
        }
    return 0;
}