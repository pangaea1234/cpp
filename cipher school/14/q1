#include<bits/stdc++.h>
using namespace std;

// Linear search O(n)
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i] >= target)return i;
        }

        return nums.size();
    }

// Binary search approach O(log(n))
    int searchInsert(vector<int>& nums, int target) {
        int ans = INT_MAX;
        int lo = 0;
        int hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == target)return mid;
            else if(nums[mid] < target){
                lo = mid+1;
            }else{
                ans = min(ans,mid);
                hi = mid-1;
            }
        }

        return ans;
    }


// Binary search approach O(log(n)) using STL
    int searchInsert(vector<int>& nums, int target) {
        return ((lower_bound(nums.begin(),nums.end(),target)) - nums.begin());
    }

int main(){

    return 0;
}
