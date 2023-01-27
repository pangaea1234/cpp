#include<bits/stdc++.h>
using namespace std;


int findIndex(vector<int>&nums,int target){
    int i = 0;
    int j = nums.size()-1;
   int ans = INT_MAX;
    while(i <= j){
        int mid = i+(j-i)/2;
        if(nums[mid] == target){
            ans = min(ans,mid);
            j = mid-1;
        }else if(nums[mid] > target){
            j = mid-1;
        }else i = mid+1;
    }

    return (ans == INT_MAX) ? -1 : ans;
}

    
int main(){

    return 0;
}
