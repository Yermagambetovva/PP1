#include <iostream>
#include <map>
#include <string>
using namespace std;
void problemH() {
    int n;
    cin >> n; 
    map<string, int> words; 

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        if (words.find(word) == words.end()) { 
            words[word] = i + 1; 
        }
    }
    for (const auto &entry : words) {
        cout << entry.first << " " << entry.second << endl;
    }
}

int main() {
    problemH(); 
    return 0;
}

/*
void problemH(){
    int n;
    cin >> n;
    if(n > 1 || n < 20){
        return;
    }
    map<string, int> words;
    for(int i = 0; i < n ; ++i){
        string word;
        cin >> word;
        if(words.find(word) == words.end()){
            words[word] = i+1;
        }
        map<string, int>::iterator it;
        for(it == words.begin(); it != words.end(); it++){
            cout << it->first << " " << it->second << endl;
        }
    }
}
int main(){
    problemH();
    return 0;
}

*/