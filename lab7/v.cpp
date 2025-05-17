#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    unordered_map<string, string> database;
    vector<string> output;
    for(int i = 0; i < n; i++){
        string command, key, value;
        cin>>command;
        if(command == "set")
            cin>>key>>value;
        else
            cin>>key;
        if(command == "set")
        {
            database[key] = value;
        }
        else if(command == "get")
            {
                if(!database.count(key)){
                    output.push_back("KE: no key " + key +  " found in the document");
                }
                else
                    output.push_back(database[key]);
            }
    }
    for(int i = 0; i < output.size(); i++) cout<<output.at(i)<<endl;
}