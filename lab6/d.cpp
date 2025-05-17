#include <iostream>
#include <algorithm>
using namespace std;
void id(int a[], int n, int x){
    bool res=false;
    for(int i=0;i<n;++i){
        if(a[i] == x){
            res=true;
            break;
        }
    }
    if(res){
        cout << "Yes" << " ";
    }else{
        cout << "No" << " ";
    }
}
int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    cin>>x;
    id(a, n, x);
    return 0;
}