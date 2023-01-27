#include<bits/stdc++.h>
using namespace std;

bool helper(string s,int i,int j){
    if(i == j)return 1;
    
    if(s[i] == s[j])return helper(s,i+1,j-1);

    return 0;
}

bool checkPalindrome(string s){
    return helper(s,0,s.size()-1);
}

int main(){

    return 0;
}
