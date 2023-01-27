#include<bits/stdc++.h>
using namespace std;

// linear search o(n)
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini = -1;
        int maxi = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                if(mini == -1)mini = i;
                maxi = max(maxi,i);
            }
        }
        return {mini,maxi};
    }

// binary search O(log(n));
    int find(vector<int>&nums,int t,bool f){
        int lo = 0;
        int hi = nums.size()-1;
        int ans = -1;
        if(f){
            while(lo <= hi){
                int mid = lo+(hi-lo)/2;
                if(nums[mid] == t){
                    ans = mid;
                    hi = mid-1;
                }else if(nums[mid] > t){
                    hi = mid-1;
                }else lo = mid+1;
            }
        }else{
            while(lo <= hi){
                int mid = lo+(hi-lo)/2;
                if(nums[mid] == t){
                    ans = mid;
                    lo = mid+1;
                }else if(nums[mid] > t){
                    hi = mid-1;
                }else lo = mid+1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int fI = find(nums,target,1);
        int sI = find(nums,target,0);

        return {fI,sI};
    }

// stl binary search functions
    vector<int> searchRange(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)){
            int fI = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            int lI = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
            return {fI,lI}; 
        }
        return {-1,-1};
    }

int main(){

    return 0;
}
