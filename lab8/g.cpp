#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;  // Вводим строку

    stack<char> stkfornumbers;  // Используем стек для хранения символов

    // Проходим по всем символам строки
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];

        if (c == '1' && !stkfornumbers.empty() && stkfornumbers.top() == '1') {
            // Если текущий символ '1' и верхний элемент стека тоже '1', убираем два '1'
            stkfornumbers.pop();
        } else {
            // В противном случае просто добавляем символ в стек
            stkfornumbers.push(c);
        }
    }

    // Строим результат из стека
    string result = "";
    while (!stkfornumbers.empty()) {
        result = stkfornumbers.top() + result;  // Добавляем верхний элемент стека в начало строки
        stkfornumbers.pop();
    }

    cout << result << endl;  // Выводим результат

    return 0;
}
