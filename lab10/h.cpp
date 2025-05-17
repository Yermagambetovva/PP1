#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector<int> banknotes(n);
    for(int i = 0; i < n; ++i){
        cin >> banknotes[i];
    }
    cin >> m;
    vector<int> t(m);
    for(int j=0; j<m; ++j){
        cin >> t[j];
    }
    unordered_map<int, int> k;
    for(vector<int>::iterator it = banknotes.begin(); it != banknotes.end(); ++it){
        k[*it]++;
    }
    for(vector<int>::iterator it = t.begin(); it != t.end(); ++it){
        cout << k[*it] << endl;
    }
    return 0;
}