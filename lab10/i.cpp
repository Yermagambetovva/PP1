#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    set<int> q;  //в сете всегда сразу все будет рассортировано по возрастанию
    for(int i = 0; i < n; ++i){
        q.insert(v[i]);
    }
    if(!q.empty()){
        int minValue = *q.begin();
        cout << minValue << endl;
    }
    return 0;
}