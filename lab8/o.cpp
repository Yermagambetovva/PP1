#include <iostream>
#include <string>
#include <map>
using namespace std;
#include <iostream>
#include <string>
#include <map>
using namespace std;
// код для того, чтобы узнать есть ли похожие элементы
// (выведет только один коррект пассуорд, потому что нашел хотя бы один одинаковый пароль)
void problemO() {
    int n;
    cin >> n;
    
    map<string, string> students;
    for (int i = 0; i < n; ++i) {
        string name, password;
        cin >> name >> password;
        students[name] = password;  // Используем [] для добавления элемента
    }
    
    int m;
    cin >> m;
    
    map<string, string> requires;
    for (int j = 0; j < m; ++j) {
        string namee, passwordd;
        cin >> namee >> passwordd;
        requires[namee] = passwordd;  // Также используем [] для добавления элемента
    }

    bool found = false;
    
    // Используем итераторы для обхода students
    map<string, string>::iterator it1;
    for (it1 = students.begin(); it1 != students.end(); ++it1) {
        // Ищем в requires информацию с таким же ключом
        map<string, string>::iterator it2 = requires.find(it1->first);
        
        // Если нашли совпадение ключей и значений паролей
        if (it2 != requires.end() && it2->second == it1->second) {
            found = true;
            cout << "correct password" << endl;
            break;  // Выход из цикла, так как нашли правильный пароль
        }
    }
    
    // Если не было найдено совпадений
    if (!found) {
        cout << "password error" << endl;
    }
}

int main() {
    problemO();
    return 0;
}