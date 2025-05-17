#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count[10]={0};   //создается массив для подсчета количества каждой цифры от 0 до 9 
    for(int i = 0; i < s.length(); i++){
        count[s[i] - 48]++;                //вместо 48 можно 0, так как в аски код символ 0 равен 48 (подсчет количества цифр и увеличивает счетчик соответствующей цифры)
    }
    string result = "YES";
    int f=0;                              //первое ненулевое количество цифр
    for(int i = 0; i < 10; i++){
        if(count[i] != 0){
            f = count[i];
            break;
        } 
    }
    for(int i = 0; i < 10; i++){
        if(count[i] != 0 && count[i] != f){
            result = "NO";
            break;
        } 
    }  
    cout << result;     
    return 0;   
}