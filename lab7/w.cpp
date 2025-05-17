#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>
using namespace std;
int main(){
    int amount_of_bugs;
    cin>>amount_of_bugs;
    unordered_map<string, int> weaknesses;
    for(int i = 0; i < amount_of_bugs; i++){
        string bug_name, bug_weakness;
        cin>>bug_name>>bug_weakness;
        if(!weaknesses.count(bug_weakness))
            weaknesses.insert({bug_weakness, 1});
        else
            weaknesses[bug_weakness] += 1;
    }
    int amount_of_hunters;
    cin>>amount_of_hunters;
    for(int i = 0; i < amount_of_hunters; i++){
        string hunter_name, hunter_power;
        int amount_of_power;
        cin>>hunter_name>>hunter_power>>amount_of_power;
        if(weaknesses.count(hunter_power))
            {
                weaknesses[hunter_power] -= amount_of_power;
            }
    }
    long long bugs_left = 0;
    for(auto i : weaknesses){
        if(i.second > 0){
            bugs_left += i.second;
            }
    }
    cout<<"Bugs left: "<<bugs_left;
}