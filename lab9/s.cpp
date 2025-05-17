#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it;
    it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    do{
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}