#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
long long n;
bool cmp(pair<double, string> a, pair<double, string> b) {
    if (a.first != b.first) {
        return a.first > b.first; 
    }
    return a.second < b.second; 
}
int main (){
    cin >> n;
    map<string,pair<double,double >>m;
    vector<pair<double,string >>v;
    map<string,pair<double,double >>:: iterator it;
    for (int i = 0; i< n; i++){
        string name;
        double grade;
        cin >> name >> grade;
        m[name].first+=grade;
        m[name].second++;
    }
    for (it=m.begin(); it!=m.end(); it++){
        v.push_back({it->second.first/it->second.second ,it->first});
        // cout  <<fixed << setprecision(3) << it->first << ':' << ' '<< it->second.first/it->second.second  << endl;
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i<v.size(); i++){
        cout <<fixed << setprecision(3) << v[i].second << ": " << v[i].first<< endl; 
    }
    return 0;
}

/*
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Student{
    double totalGPA;
    int semesters;
    string name;
    Student() {
        name = "";
        totalGPA = 0;
        semesters = 0;
    }
    void addGPA(int gpa) {
        totalGPA += gpa;
        semesters++;
    }
    double getAverageGPA() const {
        return totalGPA / semesters;
    }
    bool comparator(const Student& a, const Student& b){
    if (a.getAverageGPA() == b.getAverageGPA()) {
            return a.name < b.name;  
        }
    return a.getAverageGPA() > b.getAverageGPA();  
    }
};
int main(){
    int n;
    cin >> n;
    map<string, Student> students;
    for(int i = 0; i < n; ++i){
        string name;
        int gpa;
        cin >> name >> gpa;
        if(students.find(name) != students.end()){
            //если студент уже есть в мапе добавляем гпа
            students[name].addGPA(gpa);
        }else {
            // Если студента нет в мапе, создаем нового
            Student newStudent;
            newStudent.name = name;
            newStudent.addGPA(gpa);
            students[name] = newStudent;
        }

    }
    vector<Student> sortedStudents;
    for (map<string, Student>::iterator it = students.begin(); it != students.end(); ++it) {
        sortedStudents.push_back(it->second);
    }
    sort(sortedStudents.begin(), sortedStudents.end(), comparator);
    for (int i = 0; i < sortedStudents.size(); ++i) {
        printf("%s: %.3f\n", sortedStudents[i].name.c_str(), sortedStudents[i].getAverageGPA());
    }


    return 0;
}
*/

/*

#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip> // Для std::fixed и std::setprecision
using namespace std;

struct Student {
    double totalGPA;
    int semesters;
    string name;

    Student() {
        name = "";
        totalGPA = 0;
        semesters = 0;
    }

    void addGPA(int gpa) {
        totalGPA += gpa;
        semesters++;
    }

    double getAverageGPA() const {
        return totalGPA / semesters;
    }

    // Статическая функция для сортировки
    static bool comparator(const Student& a, const Student& b) {
        if (a.getAverageGPA() == b.getAverageGPA()) {
            return a.name < b.name; // Если ГПА одинаковые, сортируем по имени
        }
        return a.getAverageGPA() > b.getAverageGPA(); // Сортируем по ГПА (убывание)
    }
};

int main() {
    int n;
    cin >> n;
    map<string, Student> students;

    // Чтение данных
    for (int i = 0; i < n; ++i) {
        string name;
        int gpa;
        cin >> name >> gpa;
        students[name].addGPA(gpa); // Если студент уже есть, добавляем ГПА
    }

    // Переносим данные в вектор для сортировки
    vector<Student> sortedStudents;
    for (auto& pair : students) {
        sortedStudents.push_back(pair.second);
    }

    // Сортируем студентов по ГПА и имени
    sort(sortedStudents.begin(), sortedStudents.end(), Student::comparator);

    // Выводим отсортированные данные
    for (const auto& student : sortedStudents) {
        // Используем std::cout с фиксированной точностью
        cout << student.name << ": " << fixed << setprecision(3) << student.getAverageGPA() << endl;
    }

    return 0;
}

*/