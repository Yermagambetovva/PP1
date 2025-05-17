#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string> queue;
    vector<string> tickets(n);
    for(int i = 0; i < n; ++i){
        int index;
        cin >> index;
        if(index == 1){
            string name;
            cin >> name;
            queue.push(name);
            tickets[i]=queue.front();
        }else if(index == 2){
            if(queue.empty()){
                tickets[i] = "queue is empty";
            }else{
                queue.pop();
                if(queue.empty()){
                    tickets[i]="queue is empty";
                }else{
                    tickets[i]=queue.front();
                }
            }
        }
    }
   for(int i = 0; i <n; ++i){
    cout << tickets[i] << endl;
   }
   return 0;
}