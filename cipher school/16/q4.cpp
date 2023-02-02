/*delete node at kth position using recursion*/

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


Lnode* deleteNode(Lnode*head,int k){
    if(!head){
        return head;
    }else if(k == 1){
        return head->next;
    }
    Lnode*t = deleteNode(head->next,k-1);
    head->next = t;
    return head;
}

int main(){

    return 0;
}
