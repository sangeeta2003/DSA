#include <bits/stdc++.h>
using namespace std;

vector<int> AllDivisors(int n){
    vector<int> dividend;
    int sqrtn = sqrt(n);

    for(int i = 1 ; i <= sqrtn; i++){
        if(n % i == 0){
            dividend.push_back(i);
            if(i != n / i){
                dividend.push_back(n / i);
            }
        }
    }
    return dividend;
}

int main(){
    int number = 12;
    vector<int> divisors = AllDivisors(number);
    cout << "Divisors of " << number << " are: ";
    for(int divisor : divisors){
        cout << divisor << " ";


    }
    cout << endl;
    

    return 0;
}
