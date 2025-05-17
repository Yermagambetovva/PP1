#include <iostream>
#include <algorithm>
#include <string>
#include <set>  
using namespace std;
void problemV(string word) {
    string original_word = word;  
    sort(word.begin(), word.end());  
    set<string> unique_permutations;  
    do {
        unique_permutations.insert(word);  
    } while (next_permutation(word.begin(), word.end()));  
    cout << "The anagram variants for string " << original_word << " are:" << endl;  
    for (const auto& perm : unique_permutations) {
        cout << perm << endl;  
    }
}
int main() {
    string word;
    cin >> word;  
    problemV(word);  
    return 0;
}
