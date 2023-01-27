#include<bits/stdc++.h>
using namespace std;

    int maxPower(string s) {
        int maxi = 1;
        int i = 0;
        int j = 0;
        int c = 0;
        while(j < s.size()){
            if(s[i] == s[j]){
                c++;
                j++;
            maxi = max(maxi,c);
            }else{
                // maxi = max(maxi,c);
                c = 1;
                i = j;
                j++;
            }
        }

        

        return maxi;
    }

int main(){

    return 0;
}
