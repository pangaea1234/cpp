/*Merge 2 sorted LL*/

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

Lnode* mergeLL(Lnode*h1,Lnode*h2){
    if(!h1 || !h2)return (h1 == NULL ? h2 : h1);
    Lnode*nh = new Lnode(0);
    Lnode*nt = nh;
    Lnode*t1 = h1;
    Lnode*t2 = h2;
    while(t1 && t2){
        if(t1->val < t2->val){
            nt->next = t1;
            t1 = t1->next;
        }else{
            nt->next = t2;
            t2 = t2->next;
        }
        nt = nt->next;
    }

    if(t1){
        nt->next = t1;
    }else nt->next = t2;

    return nh->next;
}

int main(){

    return 0;
}