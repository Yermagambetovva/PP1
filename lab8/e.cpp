#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue <string> contacts;
    for(int i = 0;i < n; ++i){
        string numbers;
        cin >> numbers;
        contacts.push(numbers);
    }
    map<string, int> count;  
    // Подсчитываем вхождения каждого элемента в очереди
    while (!contacts.empty()) {
        count[contacts.front()]++;
        contacts.pop();
    }
    int threecount = 0;
    for (map<string, int>::iterator it = count.begin(); it != count.end(); ++it) {
        if (it->second == 3) {
            threecount++;
        }
    }
    cout << threecount << endl;
} 