#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n){
    int sLargest = INT_MIN;
int largest = INT_MIN;
if(n < 2) return -1;


for(int i = 0 ; i < n ; i++){
    if(arr[i] > largest){
        sLargest = largest;
        largest= arr[i];
        

    }
    else if(arr[i] > sLargest && largest != arr[i]){
        sLargest = arr[i];
    }
}
return sLargest;
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

    int slargest = sLargest(arr, n);
    cout << "The largest element is: " << slargest << endl;

    return 0;
}