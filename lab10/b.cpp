#include <iostream>
#include <map>
#include <vector>
using namespace std;
struct Elements{
    int num;
    int cnt;
};
Elements findMostFrequent(const vector<int>& array){
    map<int, int> counter;
    for(int i = 0; i < array.size(); ++i){
        counter[array[i]]++;
    }

    Elements result = {1001, 0};

    for (map<int, int>::iterator it = counter.begin(); it != counter.end(); ++it) {
        if (it->second > result.cnt || (it->second == result.cnt && it->first < result.num)) {
            result.num = it->first;
            result.cnt = it->second;
        }
    }

    return result;
}
 
int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i< n; ++i){
        cin >> array[i];
    }

    Elements result = findMostFrequent(array);
    cout << result.num << endl;


    return 0;
}