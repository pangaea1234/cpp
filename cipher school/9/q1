class Solution {
public:

int kadane(vector<int>&v){
    int maxi = INT_MIN;
    int s = 0;

    for(int i = 0;i<v.size();i++){
        s+=v[i];
        maxi = max(s,maxi);
        if(s < 0)s = 0;
    }

    return maxi;
}

int minSumSub(vector<int>&v){
    int s = 0;
    int mini = INT_MAX;
    for(int i = 0;i<v.size();i++){
        s+=v[i];
        mini = min(mini,s);
        if(s > 0)s = 0;
    }

    return mini;
}

int maxSubarraySumCircular(vector<int>& nums) {
    int s1 = kadane(nums);
    int s2 = minSumSub(nums);

    int s = 0;
    for(int i = 0;i<nums.size();i++)s+=nums[i];
    if(s != s2)s-=(s2 > 0 ? 0 : s2);

    return max(s,s1);
}
};
