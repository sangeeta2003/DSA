#include <bits/stdc++.h>
using namespace std;

vector<int>printLeaders(vector<int>& arr){
    int n = arr.size();
    vector<int> ans;

    int max = arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i = n - 2 ; i >= 0; i--){
        if(arr[i] > max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
    
}
int main() {
    
  // Array Initialization.
  int n = 6;
  vector<int> arr = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(arr);
  
  
  for(int i = ans.size()-1;i>=0;i--){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}
