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

void dfs(Tnode*root,string&s){
    if(!root)return;
    if(!root->left || !root->right){
        s+=(root->val+'0');
        cout<<s<<endl;
        s.pop_back();
        return ;
    }
    s+=(root->val+'0');
    dfs(root->left,s);
    dfs(root->right,s);
    s.pop_back();
    return;
}

void printPath(Tnode*root){
    if(!root)return ;
    string s = "";
    dfs(root,s);
    return;
}

int main(){

    return 0;
}