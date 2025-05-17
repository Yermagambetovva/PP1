#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c = 'a';                        //переменная длч хранения символа с наибольшей позицией в алфавите
    for (int i = 0; i<s.length(); i++){
        if(s[i] > c){                    //если символ больше чем символ с наибольшей позицией
            c = s[i];                    //обновляем переменную с наибольшей позицией
        }
    }
    cout << c << endl;
    return 0;
}