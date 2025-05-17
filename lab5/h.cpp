#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main (){
    string word;
    while(cin >> word){
        bool digit = false;
        for(int i = 0; i < word.length(); i++){
            if(word[i] >= '0' && word[i] <= '9'){    //проверяем является ли символ цифрой
                digit = true;
                break;
            }
        }
        if(!digit){
            cout << word << " " << endl;     //если нет цифр выводим слово (пробел чтобы они не в одной строке были)
        }
    }
    return 0;
}