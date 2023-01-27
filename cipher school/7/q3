#include<bits/stdc++.h>

using namespace std;

bool isMonotonic(vector<int>& nums) {
    if(nums.size() <= 1)return 1;

    bool ans = 1;
    if(nums[0] <= nums[1]){
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] > nums[i]){
                ans = 0;
                break;
            }
        }
    }

    bool f = 1;
    if(nums[0] >= nums[1]){
        for(int i= 1;i<nums.size();i++){
            if(nums[i-1] < nums[i]){
                f = 0;
                break;
            }
        }
    }

    return (ans || f);
}

int main(){

    return 0;
}
