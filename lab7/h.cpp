#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n];
    map<int, int> counter;
    for(int i = 0; i < n; ++i){
        cin >> m[i];
    }
    for(int i = 0; i < n; ++i){
        ++counter[m[i]];
    }
    for (int i = 0; i < n; ++i){
        if (counter[m[i]] == 1)
            cout << m[i] << " ";
    }
    return 0;
}