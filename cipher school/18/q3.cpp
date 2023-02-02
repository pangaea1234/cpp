/*reduendent pair of bracket*/

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

bool redundentBracket(string exp){
    stack<char>stk;
    string op = "+-/*";
    for(int i = 0;i<exp.size();i++){
        if(exp[i] == '(' || op.find(exp[i]) != string::npos){
            stk.push(exp[i]);
        }else if(exp[i] == ')'){
            bool f = 0;
            while(!stk.empty() && stk.top() != '('){
                f = 1;
                stk.pop();
            }
            if(!f)return 1;
            stk.pop();
        }
    }

    return 0;
}

int main(){

    return 0;
}