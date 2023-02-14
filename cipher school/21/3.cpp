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
        if(!root)return NULL;
        if(p == root || q == root)return root;
        Tnode*lans = lowestCommonAncestor(root->left,p,q);
        Tnode*rans = lowestCommonAncestor(root->right,p,q);

        if(!lans && rans)return rans;
        else if(!rans && lans)return lans;
        else if(lans && rans)return root;        

        return NULL;
    }

int main(){

    return 0;
}