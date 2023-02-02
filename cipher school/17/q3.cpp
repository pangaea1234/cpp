/*odd after even*/

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


Lnode* evenOdd(Lnode*head){
    if(!head)return head;

    Lnode*eh = new Lnode(0);
    Lnode*et = eh;
    Lnode*oh = new Lnode(0);
    Lnode*ot = oh;
    Lnode*temp = head;
    while(temp){
        if(temp->val % 2 == 0){
            et->next = new Lnode(temp->val);
            et = et->next;
        }else{
            ot->next = new Lnode(temp->val);
            ot = ot->next;
        }
        temp = temp->next;
    }

    if(et == eh){
        ot->next = NULL;
        return oh->next;
    }

    et->next = oh->next;
    oh->next = NULL;
    return eh->next;
}

int main(){

    return 0;
}