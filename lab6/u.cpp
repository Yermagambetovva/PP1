#include <iostream>
#include <cmath>
using namespace std;
int NiceJJjoke(int a,int b){
    int gcd;
    if(a<b){
        for(int i=a;i>0;i--){
            if(a%i==0 && b%i==0){
                gcd=i;
                break;
            }
        }
    }else if(b<a){
        for(int i=b;i>0;i--){
            if(a%i==0 && b%i==0){
                gcd=i;
                break;
            }
        }
    }else{
        gcd=a;
    }
    return gcd;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=-9999;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int asdf = NiceJJjoke(a[i],a[j]);
            if( max < asdf ){
                max=asdf;
            }
        }
    }
    cout<<max;

    return 0;
}