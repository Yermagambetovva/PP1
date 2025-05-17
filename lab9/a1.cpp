#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
bool compare(const pair<string, int>& a, const pair<string, int>& b){
    return a.second > b.second;
}
int main(){
    string text;
    getline(cin, text);
    map<string, int> wordCount;
    istringstream stream(text);   //Создает поток из строки text, который далее используется для построчного или словесного анализа этой строки. 
    //Это позволяет нам разбить строку на отдельные слова, чтобы далее подсчитать, сколько раз каждое слово встречается.
    string word;
    while(stream >> word){    //Мы читаем данные из потока в переменную word с помощью оператора >>. 
        wordCount[word]++;    //Поток будет извлекать слова одно за другим (по умолчанию, разделителем является пробел или любой пробельный символ: пробел, табуляция, новая строка).
    }                         //Каждый раз, когда извлекается слово, мы увеличиваем его счетчик в мапе.
    vector<pair <string, int> > v(wordCount.begin(), wordCount.end());
    sort(v.begin(), v.end(), compare);
    for(vector<pair <string, int> >::iterator it = v.begin(); it!= v.end(); ++it){
        cout << it->first << " " << ":" << " " << it->second << endl;
    }
    return 0;

}


/*
std::istringstream — это тип потока, предназначенный для работы с данными, хранящимися в строке. 
Он является частью библиотеки <sstream>.

std::istringstream: Это поток, с помощью которого можно читать данные, как если бы они поступали из потока, 
но на самом деле они находятся внутри строки. Мы можем использовать его, например, для того, 
чтобы извлекать отдельные слова или числа из строки.*/