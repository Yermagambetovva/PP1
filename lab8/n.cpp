#include <iostream>
#include <vector>
#include <set>  
using namespace std;
int main() {
    int n;
    cin >> n;  
    vector<int> a(n);  
    set<int> elements; 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        elements.insert(a[i]);  
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int xor_result = a[i] ^ a[j];  
            if (elements.find(xor_result) != elements.end()) {
                count++;  
            }
        }
    }
    cout << count << endl;
    return 0;
}
