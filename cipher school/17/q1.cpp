/*Middle of a LL*/

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

/* Brute force
int findLen(Lnode*head){
    if(!head)return 0;

    return findLen(head->next)+1;
}

Lnode* middleOfLL(Lnode*head){
    int len = findLen(head);
    int mid = (len%2 ==0 ? len/2 : ceil(len/2));

    Lnode*temp = head;
    while(mid >1){
        temp = temp->next;
    }    

    return temp;
}*/

Lnode* middleOfLL(Lnode*head){
    if(!head)return head;

    Lnode*s = head;
    Lnode*f = head->next;
    while(f){
        if(!f->next)return s;
        s = s->next;
        f = f->next->next;
    }

    return s->next;
}

int main(){

    return 0;
}