#include<bits/stdc++.h>
using namespace std;

    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        int j = n;
        bool f = 1;
        vector<int>ans;
        while ((i < n) || j < 2*n)
        {
            if(f){
                ans.push_back(nums[i]);
                i++;
                f = 0;
            }else{
                ans.push_back(nums[j]);
                j++;
                f = 1;
            }
        }

        return ans;
    }

int main(){

    return 0;
}
