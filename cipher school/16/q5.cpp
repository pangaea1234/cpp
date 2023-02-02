/*reverse LL using recursion*/

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


Lnode* reverse(Lnode*head){
    if(!head || !head->next)return head;

    Lnode*nh = reverse(head->next);

    Lnode*t = head->next;
    t->next = head;
    head->next = NULL;

    return nh;
}

int main(){

    return 0;
}