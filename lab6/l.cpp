#include <iostream>
using namespace std;
// task L
void ValidSSString_2(string s,int n){
    bool bi=false;
    if(n==1){
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                bi=true;
                break;
            }
        }  
        if(bi){
            cout<<"Valid";
        }else{
            cout<<"Not valid";
        }
    }else{
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                int cccc=0;
                for(int j=1;j<=n;j++){
                    if(s[i+j]>=48 && s[i+j]<=57){
                        cccc++;
                        if(cccc>=n-1){
                            bi=true;
                            break;
                        }
                    }
                }
            }
        }
        if(bi){
            cout<<"Valid";
        }else{
            cout<<"Not valid";
        }
    }
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    ValidSSString_2(s,n);

    return 0;
}