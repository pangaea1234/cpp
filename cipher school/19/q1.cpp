/*https://leetcode.com/problems/intersection-of-two-linked-lists/*/

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

// TC:O(n+m) , SC: O(n);
    Lnode *getIntersectionNode(Lnode *headA, Lnode *headB) {
        unordered_set<Lnode*>st;
        Lnode*t = headA;
        while(t){
            st.insert(t);
            t = t->next;
        }
        t = headB;
        while(t){
            if(st.count(t))return t;
            t = t->next;
        }

        return NULL;
    }


// TC:O(n+m)
    int findL(Lnode*head){
        if(!head)return 0;
        return findL(head->next)+1;
    }

    Lnode *getIntersectionNode(Lnode *headA, Lnode *headB) {
        int la = findL(headA);
        int lb = findL(headB);
        int d = abs(la-lb);
        Lnode*t1 = headA;
        Lnode*t2 = headB;

        if(la > lb){
            while(d-- > 0)t1 = t1->next;
        }else {
            while(d-- > 0)t2 = t2->next;
        }

        while(t1 && t2){
            if(t1 == t2)return t1;
            t1 = t1->next;
            t2 = t2->next;
        }

        return NULL;
    }


int main(){

    return 0;
}