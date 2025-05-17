#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string a = s;   //создаем копию строки эс
    reverse(a.begin(),a.end()); //переворачиваем копию
    if(a == s){                     //если перевернутая строка совпадаетс исходной(то есть эс стала палиндромом)
        cout<<"YES"; 
    } 
    else{ 
        cout<<"NO"; 
    }
    return 0;
}