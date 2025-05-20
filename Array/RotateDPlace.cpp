#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void leftRotate(vector<int>& arr,int k){
    int n = arr.size();
   k = k % n;

   reverse(arr.begin(),arr.end());
   reverse(arr.begin()  , arr.begin() + k);
   reverse(arr.begin() + k , arr.end());

}

int main(){
    int n ;
    cout << "enter value of n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int k ;
    cout << " enter the position ";
    cin >> k;

leftRotate(arr,k);
cout << " array left rotate" << k << "position";
for(int i = 0 ; i < n ;i++){
    cout << arr[i] << "";

}
cout << endl;
return 0;

}