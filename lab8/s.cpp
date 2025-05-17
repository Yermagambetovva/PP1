#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main() {
    int n, corev = 0;
    cin>>n;
    deque<int> arr;
    int a, b;
    int cur = 1;
    for(int i = 0; i<n; i++) {
        cin>>a;             
        if (a == 2) {
            corev++;
            if( cur == 1) {
                cur = 2;
            }
            else {
                cur = 1;
            }
            
        }            
        else if ( a == 1) {
            cin>>b;
            if( cur == 1) {
            arr.push_front(b);
            }
            else{
                arr.push_back(b);
            }
        } 
    }
    if(corev % 2 == 0) {
                reverse(arr.begin(), arr.end());  
            }
    for(int x : arr) {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
