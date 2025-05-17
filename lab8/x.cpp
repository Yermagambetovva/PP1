#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
        return true;
    } else {
        return false;
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> primes;
    for(int i = 2; i <= 10000; i++){
        bool flag = isPrime(i);
        if(flag){
            primes.push_back(i);
        }
    }

    vector<int> superprimes;
    for(int i = 0; i < primes.size(); i++){
        bool flag = isPrime(i + 1);
        if(flag){
            superprimes.push_back(primes[i]);
        }
    }

    for(int i = 0; i < superprimes.size(); i++){
        if(i == n - 1){
            cout << superprimes[i];
        }
    }

    return 0;

}