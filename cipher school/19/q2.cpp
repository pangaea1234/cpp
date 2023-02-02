/*Implement stack using 2 queues*/

#include<bits/stdc++.h>
using namespace std;


class myStack{
    queue<int>q1;
    queue<int>q2;
    public:
    myStack(){
    }

    void push(int val){
        q1.push(val);
    }
    int top(){
        int s = q1.size();
        for(int i = 0;i<s-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int val = q1.front();
        q1.pop();
        q2.push(val);
         s = q2.size();
        for(int i = 0;i<s;i++){
            q1.push(q2.front());
            q2.pop();
        }

        return val;
    }
    int pop(){
        int s = q1.size();
        for(int i = 0;i<s-1;i++){
            q2.push(q1.front());
            q1.pop();
        }

        int val = q1.front();
        q1.pop();
         s = q2.size();
        for(int i = 0;i<s;i++){
            q1.push(q2.front());
            q2.pop();
        }

        return val;
    }

};

int main(){
    myStack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout<<stk.top()<<endl; //4
    cout<<"poping "<<stk.pop()<<endl; //4
    cout<<stk.top()<<endl; //3
    return 0;
}