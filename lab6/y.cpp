#include <iostream>
using namespace std;

string WordToArabic(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') 
            s[i] += 32; // Приводим к нижнему регистру
        if (s[i] == 'p') 
            s[i] = 'b'; // Замена 'p' на 'b'
        if (s[i] == 'e') 
            s[i] = 'i'; // Замена 'e' на 'i'
    }
    return s; // Возвращаем измененную строку
}

int main() {
    int n;
    cin >> n;
    string s[n * 2];

    for (int i = 0; i < n * 2; i++) {
        cin >> s[i];
        s[i] = WordToArabic(s[i]); // Обновляем строку
    }

    for (int i = 0; i < n * 2; i += 2) {
        if (s[i] == s[i + 1]) 
            cout << "Yes" << endl; // Если строки равны
        else 
            cout << "No" << endl; // Если строки не равны
    }

    return 0;
}
