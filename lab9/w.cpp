#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s;
    cin >> s;
    //a frequency array of size 62 (26 for 'a'-'z', 26 for 'A'-'Z', 10 for '0'-'9')
    vector<int> freq(62, 0);
    // Count frequency of each character
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if ('a' <= c && c <= 'z') {
            freq[c - 'a']++;  
        } else if ('A' <= c && c <= 'Z') {
            freq[c - 'A' + 26]++;  
        } else if ('0' <= c && c <= '9') {
            freq[c - '0' + 52]++; 
        }
    }
    
    // Count how many characters have an odd frequency
    int odd_count = 0;
    for (int i = 0; i < 62; ++i) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }
    
    // If more than one character has an odd frequency, it's not possible to form a palindrome
    if (odd_count > 1) {
        cout << "JOJO" << endl;
    } else {
        cout << "ZA WARUDO TOKI WO TOMARE" << endl;
    }
    
    return 0;
}
