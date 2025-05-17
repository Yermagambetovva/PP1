#include <iostream>
#include <algorithm>           //для реверс
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    char x = s[0];  //сохраняем первый символ строки в новую переменную
    s+=x; 
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