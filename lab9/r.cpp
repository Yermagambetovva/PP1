#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> v;
    for(int i = 1; i <= N; ++i){
        v.push_back(i);
    }
    int result = 0;
    do{
        int count = 0;
        for(int i = 0; i < N; ++i){
            if(v[i] == i + 1){
                count++;
            }
        }
        if(count  == K){
                result++;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << result << endl;
    return 0;
}