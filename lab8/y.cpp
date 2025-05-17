#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    stack<char> res;

    // Цикл по символам строки
    for (int i = 0; i < a.length(); i++)
    {
        char i_char = a[i];  // символ на позиции i
        if (!res.empty() && res.top() == i_char) 
            res.pop();
        else 
            res.push(i_char);
    }

    // Используем if-else для вывода
    if (res.empty())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
