/*find sum of nums from the string*/

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

// using stack
bool helperStack(Lnode*head){
    stack<Lnode*>stk;
    Lnode*temp = head;
    while(temp){
        stk.push(temp);
        temp = temp->next;
    }
    temp = head;
    while(temp){
        if(temp->val == stk.top()->val){
            stk.pop();
            temp = temp->next;
        }else return 0;
    }
    return 1;
}

// using vector
bool helperVector(Lnode*head){
    vector<int>v;
    Lnode*temp = head;
    while(temp){
        v.push_back(temp->val);
        temp = temp->next;
    }

    int i = 0;
    int j = v.size()-1;
    while(i <= j){
        if(v[i] == v[j]){
            i++;
            j--;
        }else return 0;
    }

    return 1;
}

// using string
bool helperString(Lnode*head){
    string str = "";
    Lnode*temp = head;
    while(temp){
        str+=to_string(temp->val);
        temp = temp->next;
    }
    int i = 0;
    int j = str.size()-1;
    while(i <= j){
        if(str[i] == str[j]){
            i++;
            j--;
        }else return 0;
    }
    return 1;
}

bool isPlaindrome(Lnode*head){
    return helperStack(head);
    return helperVector(head);
    return helperString(head);
}

int main(){

    return 0;
}