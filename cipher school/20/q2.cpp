/*https://leetcode.com/problems/greatest-common-divisor-of-strings/description/*/

#include<bits/stdc++.h>
using namespace std;

    bool check(string temp,string s1,string s2){
        bool f1 = 0;
        bool f2 = 0;
        string ns = temp;
        while(temp.size() <= max(s1.size(),s2.size())){
            if(temp == s1)f1 = 1;
            if(temp == s2)f2 = 1;
            temp+=ns;
        }

        return f1&&f2;
    }

   string gcdOfStrings(string str1, string str2) {
        if(str1.size() <= str2.size()){
            if(str2.find(str1) == string::npos)return "";
        }else {
            if(str1.find(str2) == string::npos)return "";
        }

        string temp = (str1.size() <= str2.size() ? str1:str2);
        while(temp.size() > 0){
            if(check(temp,str1,str2))return temp;
            temp.pop_back();
        }

        return "";
   }
int main(){

    return 0;
}