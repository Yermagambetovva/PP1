#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>> s;
    string result = "";                  //строка для хранения результата
    for(int i = 0; i<s.length(); i++){
        if(isalpha(s[i])){              //проверяем является символ буквой 
            result += s[i];             //если буква добавляем в результат
        }
    }
    cout << result << endl;
    return 0;
}