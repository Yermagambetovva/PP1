#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    vector<int> v2(m);
    for (int j = 0; j < m; ++j) {
        cin >> v2[j];
    }
    v1.insert(v1.end(), v2.begin(), v2.end());
    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
