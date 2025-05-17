#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;  
    vector<int> seq;  
    for (int i = 1; i <= n; ++i) {
        vector<int> v(i);  
        fill(v.begin(), v.end(), i);  
        seq.insert(seq.end(), v.begin(), v.end());  
    }
    for (vector<int>::iterator it = seq.begin(); it != seq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
