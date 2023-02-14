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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
                if(!root)return {};
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root);

        vector<vector<int>>ans;
        while(!st1.empty() || !st2.empty()){
            vector<int>v;
            while(!st1.empty()){
                TreeNode*t = st1.top();
                st1.pop();
                v.push_back(t->val);
                if(t->left)st2.push(t->left);
                if(t->right)st2.push(t->right);
            }
            if(v.size() > 0)ans.push_back(v);
            v.clear();

            while(!st2.empty()){
                TreeNode*t= st2.top();
                st2.pop();
                v.push_back(t->val);
                if(t->right)st1.push(t->right);
                if(t->left)st1.push(t->left);
            }
            if(v.size()>0)ans.push_back(v);
        }

        return ans;
    }

int main(){

    return 0;
}