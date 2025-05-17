#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
bool compare(const pair<string, int>& a, const pair<string, int>& b){
    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}
int main(){
    string text;
    getline(cin, text);
    map<string, int> wordCount;
    istringstream stream(text);
    string word;
    while(stream >> word){
        wordCount[word]++;
    }
    vector<pair <string, int> > v(wordCount.begin(), wordCount.end());
    sort(v.begin(), v.end(), compare);
    for(vector<pair <string, int> >::iterator it = v.begin(); it!= v.end(); ++it){
        cout << it->first << " " << ":" << " " << it->second << endl;
    }
    return 0;

}