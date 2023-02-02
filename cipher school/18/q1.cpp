/*https://leetcode.com/problems/delete-node-in-a-linked-list/*/

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

    void deleteNode(Lnode* node) {
        // if(!node)return node;
        if(!node->next){
            node = NULL;
            return;
        }

        node->val = node->next->val;
        node->next = node->next->next;
        return ;

    }

int main(){

    return 0;
}