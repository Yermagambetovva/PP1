#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>height(n);
    for(int i=0;i<n;++i){
        cin >> height[i];
    }
    int q;
    cin >> q;
    while(q--){
        int L, R;
        cin >> L >> R;
        int count=0;
        int maxheight=0;
        for(int i=L;i<=R;++i){
            if(height[i] > maxheight){
                count++;
                maxheight=height[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}