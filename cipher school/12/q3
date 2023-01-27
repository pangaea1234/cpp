#include<bits/stdc++.h>
using namespace std;


    string process(string s){
        if(s.size() <=2){
            for(int i = 0;i<s.size();i++){
                s[i] = tolower(s[i]);
            }
        }else{
            for(int i = 0;i<s.size();i++){
                if(i == 0)s[i] = toupper(s[i]);
                else s[i] = tolower(s[i]);
            }
        }

        return s;
    }

    string capitalizeTitle(string title) {
        string word = "";
        string ans= "";
        for(int i = 0;i<title.size();i++){
            if(title[i] == ' '){
                string ns = process(word);
                word = "";
                ans+=' '+ns;
            }else word+=title[i];
        }   

        if(word.size()){
            ans+=' '+process(word);
        }

        return ans.substr(1);
    }

    string capitalizeTitle(string title) {
        stringstream ss(title);
        string str = "";
        string ans = "";
        while(getline(ss,str,' ')){
            ans+=' '+process(str);
        }
        return ans.substr(1);
    }
    
int main(){

    return 0;
}
