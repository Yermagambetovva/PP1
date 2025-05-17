#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool isstrong(string password){
    bool isuppercase=false, islowercase = false, isnumber = false;
    for(int i = 0;i<password.size();++i){
        if(isupper(password[i])){
            isuppercase = true;
        }else if(islower(password[i])){
            islowercase = true;
        }else if(isdigit(password[i])){
            isnumber = true;
        }
        if(islowercase && isuppercase && isnumber){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    set<string> strongpasswords;
    for(int i=0;i<n;++i){
        string password;
        cin >> password;
        if(isstrong(password)){
            strongpasswords.insert(password);
        }
    }
    cout << strongpasswords.size()<<endl;
    for(const auto &password : strongpasswords){   //пароль ссылается на каждый элемент стронгпароля, не позволяя их заменять, а авто позволяет не указывать тип (инт или вектор инт)
        cout << password << endl;
    }
    return 0;
}

//const auto в C++ — это способ, который позволяет компилятору автоматически определять тип переменной, и одновременно делает её неизменяемой.
//На простом языке:
//•	auto говорит компилятору: “Определи тип переменной сам, мне не нужно его явно указывать”. Например, если вы присваиваете переменной число, auto автоматически делает её целым типом (int).
//•	const добавляет правило, что переменную нельзя менять после её создания.
//Когда это полезно:
//1.	Если вы хотите, чтобы компилятор сам определил тип переменной, но при этом не хотите, чтобы её можно было менять.
//2.	Если вы используете цикл по элементам контейнера, но не хотите, чтобы элементы менялись:
//std::vector<int> numbers = {1, 2, 3, 4, 5};
//for (const auto& number : numbers) {
//std::cout << number << std::endl;  // Выводим элементы, но не изменяем их
//}
//Здесь const auto& делает так, что number нельзя изменить, что защищает данные от случайных изменений, и auto упрощает код, позволяя не писать явно тип данных.