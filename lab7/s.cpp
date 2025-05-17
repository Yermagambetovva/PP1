#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void problemS() {
    int n;
    cin >> n;
    
    vector<pair<string, vector<int> > > students;  // Вектор для хранения пар (имя, список оценок)
    
    // Чтение данных о студентах
    for (int i = 0; i < n; ++i) {
        string studentname;
        int studentscore;
        cin >> studentname >> studentscore;

        bool found = false;
        for (int j = 0; j < students.size(); ++j) {
            if (students[j].first == studentname) {
                // Если студент уже есть, добавляем его оценку
                students[j].second.push_back(studentscore);
                found = true;
                break;
            }
        }

        if (!found) {
            // Если студента ещё нет, добавляем его с новой оценкой
            vector<int> scores;
            scores.push_back(studentscore);
            students.push_back(make_pair(studentname, scores));
        }
    }

    // Сортировка студентов по имени (по алфавиту)
    sort(students.begin(), students.end());

    // Обработка данных студентов
    for (int i = 0; i < students.size(); ++i) {
        string name = students[i].first;
        vector<int>& scores = students[i].second;

        // Убираем дублирующиеся оценки вручную
        vector<int> unique_scores;
        for (int j = 0; j < scores.size(); ++j) {
            bool is_duplicate = false;
            for (int k = 0; k < unique_scores.size(); ++k) {
                if (scores[j] == unique_scores[k]) {
                    is_duplicate = true;
                    break;
                }
            }
            if (!is_duplicate) {
                unique_scores.push_back(scores[j]);
            }
        }

        // Если у студента 3 или больше разных оценок, он получает бонус
        if (unique_scores.size() >= 3) {
            cout << name << " +1" << endl;
        } else {
            cout << name << " NO BONUS" << endl;
        }
    }
}

int main() {
    problemS();
    return 0;
}
