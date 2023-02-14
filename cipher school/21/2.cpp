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

   bool isSameTree(Tnode* p, Tnode* q) {
    if(!q || !p){
        return (!q && !p);
    }

    if(p->val != q->val)return 0;

    return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}

int main(){

    return 0;
}