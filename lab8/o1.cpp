#include <iostream>
#include <map>
using namespace std;
//наполовину решенная задача, не учитывает что и логин может быть неправильным
void problemO(){
    int n;
    cin >> n;
    map<string, string> students;
    for (int i = 0; i < n; ++i) {
        string name, password;
        cin >> name >> password;
        students[name] = password;  
    }
    int m;
    cin >> m;
    map<string, string> requires;
    for (int j = 0; j < m; ++j) {
        string namee, passwordd;
        cin >> namee >> passwordd;
        requires[namee] = passwordd;  
    }
    bool found = false;
    map<string, string>::iterator it1;
    for (it1 = students.begin(); it1 != students.end(); ++it1) {
        map<string, string>::iterator it2 = requires.find(it1->first);
        if (it2 != requires.end() && it2->second == it1->second) {
            found = true;
            cout << "correct password" << endl;
            break; 
        }
    }
      if (!found) {
        cout << "password error" << endl;
    }
}
int main(){
    problemO();
    return 0;
}