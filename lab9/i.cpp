#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <set> 
using namespace std; 
 
int main () { 
    int n; 
    cin >> n; 
    set <int> a; 
    vector <int> vec; 
    for (int i = 0; i < n; ++i) { 
        int s; 
        cin >> s; 
        if (a.find(s) == a.end()) { 
            a.insert(s); 
            vec.push_back(s); 
        } 
    } 
    do { 
        for (int i = 0; i < vec.size(); ++i) { 
            cout << vec[i] << " "; 
        } 
        cout << endl; 
    } while (next_permutation(vec.begin(), vec.end())); 
 
    return 0;
}