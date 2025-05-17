#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2 = s1;               //копируем строку эс на новую переменную
    sort(s2.begin(), s2.end());   //сортируем скопированную строку
    if(s1 == s2){                  //если они равны (то есть строка в алфавитном порядке)
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
    }
    return 0;
}