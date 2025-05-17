#include <iostream>
#include <map>
using namespace std;
int main(){
    int numberOfTeams;
    cin >> numberOfTeams;
    map<pair <pair<string, string>,pair<int, int>>, int> teams;
    for(int i = 0; i < numberOfTeams; i++){
        string firstStudent, secondStudent;
        int firstScore, secondScore;
        cin >> firstStudent >> firstScore >> secondStudent >> secondScore;
        if(!teams.count(make_pair(make_pair(firstStudent, secondStudent), make_pair(firstScore, secondScore))))
            teams.insert({make_pair(make_pair(firstStudent, secondStudent), make_pair(firstScore, secondScore)), firstScore + secondScore});
    }
    for(const auto& [teamName, score] : teams){
        cout << teamName.first.first << " and " << teamName.first.second << " " << score << '\n';
    }

}