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


Lnode* insert(Lnode*head,int k,int val){
    if(!head){
        return new Lnode(val);
    }else if(k == 1){
        Lnode*nh = new Lnode(val);
        nh->next = head;
        return nh;
    }

    Lnode*temp = insert(head->next,k-1,val);
    head->next = temp;
    return head;
}

int main(){

    return 0;
}