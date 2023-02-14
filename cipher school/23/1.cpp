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

// using array
void dfs(TreeNode*root,vector<int>&v){
    if(!root)return;
    dfs(root->left,v);
    v.push_back(root->val);
    dfs(root->right,v);
    return;
}

 bool findTarget(TreeNode* root, int k) {
    if(!root)return 0;
    vector<int>v;
    dfs(root,v);
    
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]+v[j] == k)return 1;
        else if(v[i]+v[j] <k)i++;
        else j--;
    }

    return 0;
 }
//using set

bool dfs(TreeNode*root,int&k,unordered_set<int>&st){
    if(!root)return 0;

    bool lans = dfs(root->left,k,st);
    if(st.count(k-root->val))return 1;
    st.insert(root->val);
    bool rans = dfs(root->right,k,st);

    return lans || rans;
}

 bool findTarget(TreeNode* root, int k) {
    if(!root)return 0;
    unordered_set<int>st;
    return dfs(root,k,st);
 }

int main(){

    return 0;
}