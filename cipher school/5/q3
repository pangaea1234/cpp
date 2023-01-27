#include<bits/stdc++.h>

using namespace std;

// approach 1
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i = 1;i<=nums.size();i++){
            bool f = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j] == i){
                    f = 1;
                    break;
                }
            }
            if(!f){
                ans.push_back(i);
            }
        }

        return ans;
    }

int main(){

    return 0;
}
