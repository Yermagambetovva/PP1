#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        for(int i=n; i>0; i--){
            v.push_back(i);
            int r_l = i%v.size(); 
            rotate(v.begin(), v.begin() + r_l, v.end());
        }
        for(vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); rit++)
            cout << *rit << ' ';
        cout << endl;
    }
    return 0;
}
