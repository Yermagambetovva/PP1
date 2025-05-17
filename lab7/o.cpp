#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> neighbours(n);
    bool isneighbour = false;
    for(int i = 0; i<n; ++i){
        cin >> neighbours[i];
    }
    set <int> uniquepairs;
    for(int i=0;i<n-1;++i){
        int sum = neighbours[i] + neighbours[i+1];
        uniquepairs.insert(sum);
    }
    cout << uniquepairs.size() << endl;
    return 0;
}