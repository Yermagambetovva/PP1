#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    stack<int> st;
    stack<int> maxSt;

    for(int i = 0; i < n;i++){
        string query;
        cin >> query;

        if(query == "add"){
            int num;
            cin >> num;
            st.push(num);

            if(maxSt.empty() || num >= maxSt.top()){
                maxSt.push(num);
            } else{
                maxSt.push(maxSt.top());
            }

        }

        if(query == "delete"){
            if(!st.empty()){
                st.pop();
                maxSt.pop();
            }
        }

        if(query == "getmax"){
            if(maxSt.empty()){
                cout << "error" << endl;
            } else{
                cout << maxSt.top() << endl;
            }
        }

        if(query == "getcur"){
            if(!st.empty() ){
                cout << st.top() << endl;
            } else{
                cout << "error" << endl;
            }
        }
    }
}
