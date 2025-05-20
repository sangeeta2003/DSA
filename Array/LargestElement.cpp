#include <bits/stdc++.h>
using namespace std;

int LargestElement(int arr[],int n){
   int large = arr[0];
   for(int i = 0 ; i < n ; i++){
    if(arr[i] > large){
        large = arr[i];

    }
   }
   return large;

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

    int largest = LargestElement(arr, n);
    cout << "The largest element is: " << largest << endl;

    return 0;
}