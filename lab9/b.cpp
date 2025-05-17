#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<string, int>& a, const pair<string, int>& b){
    if (a.second == b.second) {
        return a.first < b.first; 
    }
    return a.second < b.second;
}
int main(){
    int n;
    cin >> n;
    vector<pair <string, int> > students;
    for(int i = 0; i < n; ++i){
        string name;
        int point;
        cin >> name>>point;
        students.push_back(make_pair(name, point));
    }
    sort(students.begin(), students.end(), compare);
    for(vector<pair <string, int> >::iterator it = students.begin(); it != students.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
} 