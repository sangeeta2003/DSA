#include <bits/stdc++.h>
using namespace std;

int SmallestElement(int arr[],int n){
    int small = arr[0];

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}
int main(){
    int n ;
    cout << "enter value of n";
    cin >> n;
    int arr[n];
    cout << "enter " << n <<"by space";
    for(int i = 0 ; i < n ;i++){
cin >> arr[i];

    }
    int smallest = SmallestElement(arr,n);
    cout << "the smallest element" << smallest << endl;
    return 0;
}
