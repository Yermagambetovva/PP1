#include <iostream>
#include <algorithm>
using namespace std;
int pairs(int a[], int b[], int n){
    int result = 0;
    sort(a, a+n);
    sort(b, b+n);
    int i=0; 
    int j=0;
    while(i<n && j<n){
        if(a[i] == b[j]){
            result++;
            i++;
            j++;
        } else if(a[i]<b[j]){
            i++;
        }else{
            j++;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    for(int j=0;j<n;++j){
        cin>>b[j];
    }
    cout << pairs(a,b,n) << endl;
    return 0;

}