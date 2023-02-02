/*detect cycle in a LL*/

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


bool detectCycle(Lnode*head){
    if(!head)return 0;

    Lnode*s = head;
    Lnode*f = head->next;
    while(f){
        if(!f->next)return 0;
        if(f == s)return 1;
        s = s->next;
        f = f->next->next;
    }

    return 0;
} 

int main(){

    return 0;
}