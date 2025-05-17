#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void problemA(){
    int n;
    cin >> n;
    vector <pair<int, int> > coordinates;
    for(int i = 0; i <n; ++i){
        int x;
        int y;
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }
    sort(coordinates.begin(), coordinates.end());
    for(int i = 0; i < coordinates.size(); ++i){
        cout << coordinates[i].first << " " << coordinates[i].second << endl;
    }
   
}
int main(){
    problemA();
    return 0;
}