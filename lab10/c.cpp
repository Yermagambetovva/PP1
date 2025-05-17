#include <iostream>
#include <map>
#include <string>
using namespace std;
struct Library{
    string word, translation;
};
int main() {
    int n;
    cin >> n; 
    map<string, string> dictionary;  
    string word, translation;
    for (int i = 0; i < n; ++i) {
        cin >> word >> translation;
        dictionary[word] = translation;  
    }
    string wordToRemove;
    cin >> wordToRemove;  
    Library pair;
    for (map<string, string> ::iterator it = dictionary.begin(); it != dictionary.end(); ++it) {
        if (it->first != wordToRemove) {
            pair.word = it->first;
            pair.translation = it->second;
            cout << pair.word << " " << pair.translation << endl;
        }
    }

    return 0;
}
