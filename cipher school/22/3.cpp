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

     Tnode* lowestCommonAncestor(Tnode* root, Tnode* p, Tnode* q) {
        if(!root)return root;
        if(root == p || root == q)return root;
        if(root->val > p->val && root->val > q->val)return lowestCommonAncestor(root->left,p,q);
        else if(root->val < p->val && root->val < q->val)return lowestCommonAncestor(root->right,p,q);
        else if((root->val > p->val && root->val < q->val) || (root->val < p->val && root->val > q->val))return root;

        return NULL;
    }

int main(){

    return 0;
}