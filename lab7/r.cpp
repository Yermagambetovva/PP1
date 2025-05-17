#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
void problemR(){
    int n;
    cin >> n;
    vector<string> a;
    for(int i = 0; i < n; ++i){
        string word;
        cin >> word;
        a.push_back(word);
    }
    string result = "";  // Строка для хранения общих символов

    // Проходим по каждому символу первой строки
    for (char c = 'a'; c <= 'z'; c++) {
        bool is_common = true;
        for (int i = 0; i < n; i++) {
            if (a[i].find(c) == string::npos) {  // Если символ не найден в строке
                is_common = false;
                break;
            }
        }
        if (is_common) {
            result += c;  // Добавляем символ в результат
        }
         // Если общих символов нет, выводим "NO COMMON CHARACTERS"
    }
    if (result.empty()) {
        cout << "NO COMMON CHARACTERS" << endl;
    } for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    }
int main(){
    problemR();
    return 0;
}