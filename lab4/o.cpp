#include <iostream>
#include <climits>
using namespace std;
int main(){
    int mini=INT_MAX;
    int index=0,inde=0;
    int sum=0;
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n; i++){
        for (int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    cout<<"coordinates of min elements:"<<endl;
    for (int j=0;j<m; j++){
        mini=INT_MAX;
        for (int i=0; i<n; i++) { 
         if(arr[i][j]<mini){
            mini=arr[i][j]; 
            index=j;
            inde=i;} 
           
        } 
          sum+=mini;
         cout<<inde+1<<";"<<index+1<<endl;
         
         }
         cout<<"\n";
    cout<<"Their sum:"<<endl;
    cout<<sum;

    return 0;
}