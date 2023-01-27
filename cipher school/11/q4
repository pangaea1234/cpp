#include<bits/stdc++.h>
using namespace std;

    string modifyString(string s) {
        for(int i = 0;i<s.size();i++){
            if(s[i] == '?'){
                for(char j = 'a';j<='z';j++){
                    if(i == 0 && i+1 < s.size() && (s[i+1] != j)){
                        s[i] = j;
                        break;
                    }else if( i == s.size()-1 && i-1 >= 0 && s[i-1] != j){
                        s[i] = j;
                        break;
                    }else{
                        if(s[i-1] != j && s[i+1] != j){
                            s[i] = j;
                            break;
                        }
                    }
                }
            }
        }

        return s;
    }

int main(){

    return 0;
}
