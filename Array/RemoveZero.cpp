#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(vector<int>& arr){
    int j = 0;
    for(int i = 0 ; i < arr.size();i++){
        if(arr[i] != 0){
        swap(arr[i],arr[j]);
        j++;
        }
    }
    return arr;
}
int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 0, 4, 5};
    vector<int> result = moveZeros(arr);

    for (auto x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}