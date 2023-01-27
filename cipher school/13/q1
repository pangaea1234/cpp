#include<bits/stdc++.h>
using namespace std;

    int alternateDigitSum(int n) {
        string str = to_string(n);
        int sum = 0;
        bool f = 1;
        for(int i = 0;i<str.size();i++){
            if(f){
                sum+=(str[i] -'0');
                f= 0;
            }else{
                sum-=(str[i] - '0');
                f = 1;
            }
        }
        return sum;
    }

int main(){

    return 0;
}
