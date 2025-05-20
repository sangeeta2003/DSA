#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int num, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
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

    int num;
    cout << "Enter the num to search: ";
    cin >> num;

    int val = LinearSearch(arr, num, n);

    if(val != -1)
        cout << "Element found at index " << val << '\n';
    else
        cout << "Element not found\n";

    return 0;
}
