#include <iostream>
#include <set>
using namespace std;
int main() {
    int n; 
    cin >> n;  // Вводим количество запросов
    set<string> seen;  // Множество для отслеживания уже зарегистрированных логинов
    // Обрабатываем каждый запрос
    for (int i = 0; i < n; ++i) {
        string login;
        cin >> login;  // Читаем логин
        // Если логин уже существует в множестве, выводим соответствующее сообщение
        if (seen.find(login) != seen.end()) {
            cout << "user already exists" << endl;
        } else {
            // Если логин новый, добавляем его в множество и выводим сообщение
            seen.insert(login);
            cout << "new user added" << endl;
        }
    }
    return 0;
}
