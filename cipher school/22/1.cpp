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

    Tnode* searchBST(Tnode* root, int val) {
        if(!root)return NULL;
        if(root->val== val)return root;
        if(root->val >= val)return searchBST(root->left,val);

        return searchBST(root->right,val);
    }

int main(){

    return 0;
}