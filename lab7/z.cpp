#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>  // Для установки точности

using namespace std;

// Структура для хранения информации о студенте
struct Student {
    string name;
    vector<int> scores;
};

// Функция для сравнения студентов по имени
bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

void problemZ() {
    int n;
    cin >> n;
    
    vector<Student> students;  // Вектор для хранения студентов

    // Чтение данных
    for (int i = 0; i < n; i++) {
        string studentName;
        int studentScore;
        cin >> studentName >> studentScore;
        
        // Ищем, существует ли студент с таким именем
        bool found = false;
        for (int j = 0; j < students.size(); j++) {
            if (students[j].name == studentName) {
                students[j].scores.push_back(studentScore);  // Добавляем новый балл
                found = true;
                break;
            }
        }

        // Если студента с таким именем нет, добавляем нового
        if (!found) {
            Student newStudent;
            newStudent.name = studentName;
            newStudent.scores.push_back(studentScore);
            students.push_back(newStudent);
        }
    }

    // Сортируем студентов по имени, используя обычную функцию для сравнения
    sort(students.begin(), students.end(), compareByName);

    // Вычисляем средний GPA и выводим результаты
    for (int i = 0; i < students.size(); i++) {
        double sum = 0;
        for (int j = 0; j < students[i].scores.size(); j++) {
            sum += students[i].scores[j];
        }
        double averageGPA = sum / students[i].scores.size();

        // Выводим имя студента и его средний GPA с точностью до 3 знаков
        cout << students[i].name << ":"  << " " << fixed << setprecision(3) << averageGPA << endl;
    }
}

int main() {
    problemZ();
    return 0;
}
