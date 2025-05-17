#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; ++i){
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for(int j = 0; j < m; ++j){
        cin >> v2[j];
    }
    vector<int> result(n+m);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
    for(vector<int>::iterator it = result.begin(); it != result.end(); ++it){
        cout << *it << " ";
    }
    return 0;
}