#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

/* using extra space

    void dfs(Node*root,vector<int>&v){
        if(!root)return;
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
        return ;
    }

    int kthLargest(TreeNode*root, int K)
    {
        if(!root)return 0;
        vector<int>v;
        dfs(root,v);
        return v[K-1];
    }

    */

// without extra space
    int dfs(Node*root,int&k,bool&f){
        if(!root)return -1;
        if(!root->left && !root->right){
            if(!f)f = 1;
            if(k == 1)return root->val;
            k--;
            return -1;
        }
        int rans = dfs(root->right,k,f);
        if(f && k == 1)return root->val;
        k--;
        int lans =dfs(root->left,k,f);
        return (rans == -1? lans : rans);
    }

    int kthLargest(TreeNode*root, int K)
    {
        if(!root)return 0;
        bool f = 0;
        return dfs(root,k,f);
    }

int main(){

    return 0;
}