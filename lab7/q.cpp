#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool sortbydescending(const pair<string, float> &a, const pair<string, float> &b) {
    if(a.second == b.second){
        if(a.first[0] == b.first[0]){
            return a.first[1]>b.first[1];
        }
        return a.first[0] > b.first[0];
    }
    return a.second >= b.second;
}
void problemQ(){
    int n, overallscore = 0;
    cin >> n;
    vector<pair<string, float> > students;
    for(int i = 0; i < n; ++i){
        string studentname;
        int studentscore;
        cin >> studentname >> studentscore;
        pair<string, float> student = make_pair(studentname, studentscore);
        students.push_back(student);
        overallscore += studentscore;
    }
    for (int i = 0; i <students.size(); ++i){
        int sum = students[i].second;
        for(int j=i+1; j <students.size();++j){
            if(students[i].first == students[j].first){
                sum += students[j].second;
                students.erase(students.begin() + j);
            }
        }
        students[i].second = sum;
    }
    sort(students.begin(), students.end(), sortbydescending);
    for(int i = 0; i <students.size();++i){
        float percentage = (students[i].second * 100) / overallscore;
        students[i].second = percentage;
    }
    for(int i = 0; i < students.size(); ++i){
        cout << students[i].first << " " << students[i].second << "%" << endl;
    }
}
int main(){
    problemQ();
    return 0;
}