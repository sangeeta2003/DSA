#include <bits/stdc++.h>
using namespace std;

int MissingOne(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    int missing = total - sum;
    return missing;
}

int main() {
    int n;
    cout << "Enter value of n (array size + 1): ";
    cin >> n;

    int arr[n - 1];  // Since one number is missing, input n-1 numbers
    cout << "Enter " << n - 1 << " elements:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missing = MissingOne(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
