#include <bits/stdc++.h>
using namespace std;

vector<int> UnionFound(vector<int> &arr1, vector<int> &arr2 ){
    int n = arr1.size();
    int m = arr2.size();

    set <int > s;
    vector < int > Union;

    for(int i = 0 ; i < n ; i++){
s.insert(arr1[i]);
    }
    for(int j = 0 ; j < m ; j++){
s.insert(arr2[j]);
    }

    for(auto & it : s){
        Union.push_back(it);
    }
return Union;

}
int main() {
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter " << n << " elements for the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter " << m << " elements for the second array:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = UnionFound(arr1, arr2);
    cout << "Union of the two arrays is:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
