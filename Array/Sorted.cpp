#include <bits/stdc++.h>
using namespace std;

bool SortedOrNOt(int arr[],int n){
    for(int i = 0 ;i < n; i ++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
        
    }
    return true;
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

    if(SortedOrNOt(arr,n)){
        cout << "The array is sorted";

    }
    else {
    cout <<"not sorted";
    }
    return 0;
}