#include<bits/stdc++.h>
using namespace std;

    bool check(string s1,string s2){
        vector<int>v1(26,0);
        vector<int>v2(26,0);

        for(int i = 0;i<s1.size();i++){
            v1[s1[i] - 'a']++;
        }
        for(int i = 0;i<s2.size();i++){
            v2[s2[i] - 'a']++;
        }

        for(int i= 0 ;i<26;i++){
            if((v1[i] > 0 && v2[i] > 0) || (v1[i] ==0 && v2[i] == 0))continue;
            else return 0;
        }

        return 1;
    }

    int similarPairs(vector<string>& words) {
        int c = 0;
        for(int i = 0;i<words.size();i++){
            for(int j = i+1;j<words.size();j++){
                if(check(words[i],words[j])){
                    c++;
                }
            }
        }

        return c;
    }

int main(){

    return 0;
}
