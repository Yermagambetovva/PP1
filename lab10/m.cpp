#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> attempts;
    for (int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password;
        // Увеличиваем количество попыток для данного логина
        attempts[login]++;
    }
    for (map<string, int>::iterator it = attempts.begin(); it != attempts.end(); ++it) {
        if (it->second > 3) {
            cout << it->first << " is hacked" << endl;
        } else {
            cout << it->first << " is valid" << endl;
        }
    }
    return 0;
}
