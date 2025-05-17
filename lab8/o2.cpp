#include <iostream>
#include <map>
#include <vector>
using namespace std;
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
    vector<string> requires;
    for(int i = 0; i < m; i++){
        string login, password;
        cin>>login>>password;
        if(!students.count(login))
            requires.push_back("login error");
        else if(students.at(login) != password)
            requires.push_back("password error");
        else
            requires.push_back("correct password");
    }
    vector<string>::iterator it;
    for(it = requires.begin(); it != requires.end(); ++it){
        cout<<*it<<endl;
    }
}
/*
    map<string, string> requires;
    for (int j = 0; j < m; ++j) {
        string namee, passwordd;
        cin >> namee >> passwordd;
        requires[namee] = passwordd;  
    }
    bool found = false;
    map<string, string>::iterator it1;
    for (it1 = requires.begin(); it1 != requires.end(); ++it1) {
        map<string, string>::iterator it2 = students.find(it1->first);
    
        // Проверяем, существует ли логин
        if (it2 == students.end()) {
            cout << "login error" << endl;  
        } 
        // Если логин найден, но пароль неверный
        else if (it2->second != it1->second) {
            cout << "password error" << endl; 
        } 
        // Если и логин, и пароль совпадают
        else {
            cout << "correct password" << endl;
        }
    }
}
*/

int main(){
    problemO();
    return 0;
}
