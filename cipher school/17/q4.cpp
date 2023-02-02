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


int findSum(string s){
    int sum = 0;
    int num = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num*=10;
            num+=(s[i] = '0');
        }else{
            if(num > 0){
                sum+=num;
                num= 0 ;
            }
        }
    }
    return sum;
}

int main(){

    return 0;
}