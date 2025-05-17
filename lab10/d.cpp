#include <iostream>
#include <map>
#include <iomanip>  // Для использования std::setprecision
using namespace std;

// Структура для хранения суммы оценок и их количества
struct Value {
    int total = 0;  // Сумма оценок
    int count = 0;  // Количество оценок
};

int main() {
    int n;
    cin >> n;  // Вводим количество оценок

    map<string, Value> students;  // Карта для хранения студентов и их оценок

    for (int i = 0; i < n; ++i) {
        string name;
        int grade;
        cin >> name >> grade;  // Вводим имя студента и его оценку

        // Обновляем сумму и количество оценок для студента
        students[name].total += grade;
        students[name].count += 1;
    }

    // Сортируем студентов по имени (map уже сортирует ключи по алфавиту)
    for (map<string, Value>::iterator it = students.begin(); it != students.end(); ++it) {
        string name = it->first;
        Value value = it->second;
        
        // Вычисляем среднюю оценку
        double average = static_cast<double>(value.total) / value.count;

        // Выводим имя студента и его среднюю оценку с точностью до 6 знаков
        cout << fixed << setprecision(6) << name << " " << average << endl;
    }

    return 0;
}
