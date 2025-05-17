#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;  
    vector<pair<string, int>> students_marks(N);  
    for (int i = 0; i < N; ++i) {
        cin >> students_marks[i].first >> students_marks[i].second;
    }
    sort(students_marks.begin(), students_marks.end());
    vector<int> marks;
    for (int i = 0; i < N; ++i) {
        marks.push_back(students_marks[i].second);
    }
    sort(marks.begin(), marks.end());
    for (int i = 0; i < N; ++i) {
        cout << students_marks[i].first << " " << marks[i] << endl;
    }
    
    return 0;
}
