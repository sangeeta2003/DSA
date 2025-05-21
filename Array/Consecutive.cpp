#include <bits/stdc++.h>

using namespace std;

int getLongestSum(vector<int>& arr,int k){
    int n = arr.size();

    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLength = 0;

    while(  right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLength = max(maxLength,right - left + 1);
        }
        right++;
        if(right < n)
        sum += arr[right];
    }
    return maxLength;
}
int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSum(arr, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
