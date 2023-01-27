class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>e;
        vector<int>o;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2 == 0)e.push_back(nums[i]);
            else o.push_back(nums[i]);
        }

        int ep = 0;
        int op = 0;
        for(int i = 0;i<nums.size();i++){
            if(i%2 == 0){
                nums[i] = e[ep];
                ep++;
            }else{
                nums[i] = o[op];
                op++;
            }
        }

        return nums;
    }
};
