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
    vector<int> sorted = v;
    sort(sorted.begin(), sorted.end());
    int difference = 0;
    for(int i = 0; i < n; ++i){
        if(v[i] != sorted[i]){
            difference++;
        }
    }
    if(difference == 0){
        cout << "YES" << endl;
    }else if(difference == 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}