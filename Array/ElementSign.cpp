#include <bits/stdc++.h>
using namespace std;

vector<int>ArrangeBySign(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n , 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0 ; i < n;i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;

        }
        else{
            ans[posIndex] = arr[i];
            posIndex +=2;

        }
    }
    return ans;
}
int main() {
    
  // Array Initialisation.
  
  vector<int> arr = {1,2,-4,-5};

  vector<int> ans = ArrangeBySign(arr);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}
