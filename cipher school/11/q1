#include<bits/stdc++.h>
using namespace std;

    vector<int> minSubsequence(vector<int>& nums) {
        int s = 0;
        for(int i = 0;i<nums.size();i++)s+=nums[i];
        sort(nums.begin(),nums.begin(),greater<int>());
        vector<int>ans;
        int se =0;
        for(int i = 0;i<nums.size();i++){
            if(se > s)break;
            se+=nums[i];
            s-=nums[i];
            ans.push_back(nums[i]);
        }

        return ans;
    }

int main(){

    return 0;
}
