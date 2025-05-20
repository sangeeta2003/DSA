#include <bits/stdc++.h>
using namespace std;

int SsmallestNumber(int arr[],int n){
    if(n < 2) return -1;
    int smallest = INT_MAX;
    int sSmallest = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];

        }
        else if(arr[i] < sSmallest && arr[i] != smallest){
            sSmallest = arr[i];

        }
    }
    return sSmallest;
}

int main(){
    int n;
    cout << "enter value of n";
    cin >> n;
    int arr[n];
    cout << "enter the number of elements" << n << ":";

    for(int i = 0 ; i < n;i++){
        cin >> arr[i];
    }
    int sSmall = SsmallestNumber(arr,n);
    cout << "ssmallest number is " << sSmall;

    return 0;

}