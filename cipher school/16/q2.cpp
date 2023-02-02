#include<bits/stdc++.h>
using namespace std;


class Lnode{
    public:
    int val;
    Lnode*next;
    Lnode(int val){
        this->val = val;
        this->next = NULL;
    }
};


int lengthOfLL(Lnode*head){
    if(!head)return 0;

    int l = lengthOfLL(head->next);
    
    return l+1;
}

int main(){

    return 0;
}