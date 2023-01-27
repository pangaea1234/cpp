#include<bits/stdc++.h>
using namespace std;

    bool check(string s1,string s2){
        if(s2.size() < s1.size())return 0;
        int j = 0;
        for(int i = 0;i<s2.size();i++){
            if(s2[i] == s1[j]){
                j++;
                if(j == s1.size())return 1;
            }else{
                if(j > 0 && j < s1.size())j = 0;
                if(s1[j] == s2[i])j++;
            }
        }

        return 0;
    }


    bool check(string s1,string s2){
        if(s2.size() < s1.size())return 0;

        if(s2.find(s1) != string::npos)return 1;

        return 0;
    }

    vector<string> stringMatching(vector<string>& words) {
        vector<string>v;
        for(int i = 0;i<words.size();i++){
            for(int j = 0;j<words.size();j++){
                if(i!=j && check(words[i],words[j]))v.push_back(words[i]);
            }
        }
        return v;
    }

int main(){

    return 0;
}
