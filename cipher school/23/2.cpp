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

bool dfs(TreeNode*r1,TreeNode*r2){
    if(!r1 || !r2){
        return (!r1 && !r2);
    }

    if(r1->val != r2->val)return 0;

    return (dfs(r1->left,r2->right) && dfs(r1->right,r2->left));
}
     bool isSymmetric(TreeNode* root) {
        if(!root)return 1;
        return dfs(root->left,root->right);
     }

int main(){

    return 0;
}