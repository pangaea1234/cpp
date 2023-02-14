#include<bits/stdc++.h>
using namespace std;

class Tnode{
    public:
    int val;
    Tnode*left;
    Tnode*right;
    Tnode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

    Tnode*dfs(vector<int>&v,int s,int e){
        if(s == e){
            Tnode*root = new Tnode(v[s]);
            return root;
        }
        int mid = (s+e)/2;
        Tnode*root= new Tnode(v[mid]);
        root->left = dfs(v,s,mid-1);
        root->right = dfs(v,mid+1,e);
        return root;
    }

    Tnode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)return NULL;
        return dfs(nums,0,nums.size()-1);
    }

int main(){

    return 0;
}