#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> uniqueelem;
    bool isunique = true;
    for(int i = 0; i<n; ++i){
        int elem;
        cin >> elem;
        if(uniqueelem.find(elem) != uniqueelem.end()){
            isunique = false;
        }
        uniqueelem.insert(elem);
    }
    if(isunique){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}