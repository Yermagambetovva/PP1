#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N; 
    cin >> N;  
    vector<int> seq(N); 
    for (int i = 0; i < N; ++i) {
        cin >> seq[i];
    }
    for (int i = 0; i < N; ++i) {
        if (seq[i] == seq[N - 1 - i]) {
            cout << "OK" << endl;
        } else {
            cout << "Instead of " << seq[i] << " here was " << seq[N - 1 - i] << endl;
        }
    }
    return 0;
}
