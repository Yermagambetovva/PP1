#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    map<int,int> freq;
    for (int i = 0; i < v.size(); ++i) {
        freq[v[i]]++;
    }
    if (!freq.empty()) {
        map<int, int>::iterator it = --freq.end();
        cout << it->first << endl;
    }
    return 0;
}