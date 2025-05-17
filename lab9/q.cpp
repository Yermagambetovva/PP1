#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool problemQ(int i, int j){
    return i == j;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    vector<int>::iterator it;
    it= unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    unique(v.begin(), v.end(), problemQ);
    for (it=v.begin(); it!=v.end(); ++it){
        cout << *it << " ";
    }
    cout << '\n';
    return 0;
}