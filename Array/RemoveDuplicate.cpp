#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[] , int n){
    int i = 0;
    for(int j = 1; j < n ; j++){
        if(arr[i] != arr[j]){
             i++;
            arr[i] = arr[j];
           
        }
    }
    return i+1;
}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements separated by space or newline:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newLength = removeDuplicate(arr,n);
    for(int i = 0 ; i < newLength ; i++){
cout << arr[i];
    }

    return 0;
}