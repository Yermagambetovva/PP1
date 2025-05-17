#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalindrome(vector<int> v){
    int start = 0, end = v.size() - 1;
    while(start < end){
        if(v[start] != v[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());  //для пермутэйшн нужно в порядке возрастания
    bool result = false;
    //для пермутэйшн используем ду уайл
    do{
        if(isPalindrome(v)){
            result = true;
            break;
        }
    }while(next_permutation(v.begin(), v.end()));
    if(result){
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
    }else{
        cout << "Impossible";
    }
    cout << endl;
    return 0;
}