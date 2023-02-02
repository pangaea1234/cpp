/*Min number of flips to make string balanced*/

#include<bits/stdc++.h>
using namespace std;


int minFlip(string str){
    stack<char>stk;
    for(int i = 0;i<str.size();i++){
        if(str[i] == '{')stk.push(str[i]);
        else{
            if(!stk.empty() && stk.top() == '{')stk.pop();
            else stk.push(str[i]);
        }
    }

    int c = 0;
    while(!stk.empty()){
        char ch1 = stk.top();
        stk.pop();
        char ch2 = stk.top();
        stk.pop();
        if(ch1 == ch2){
            c++;
        }else c+=2;
    }

    return c;
}

int main(){

    return 0;
}