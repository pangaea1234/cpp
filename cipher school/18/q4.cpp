/*next greater element*/

#include<bits/stdc++.h>
using namespace std;


class Lnode{
    public:
    int val;
    Lnode*next;
    Lnode(int val){
        this->val = val;
        this->next = NULL;
    }
};

vector<int> nextGreater(vector<int>&nums){
    stack<int>s;
    vector<int>ans(nums.size(),-1);
    s.push(nums[nums.size()-1]);
    for(int i = nums.size()-2;i>=0;i--){
        while(!s.empty() && s.top() < nums[i])s.pop();
        if(!s.empty()){
            ans[i] = s.top();
        }
        s.push(nums[i]);
    }

    return ans;
}

int main(){

    return 0;
}