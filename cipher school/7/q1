#include<bits/stdc++.h>

using namespace std;

 int differenceOfSum(vector<int>& nums) {
        int ds = 0;
        int es = 0;
        for(int i = 0;i<nums.size();i++){
            int e = nums[i];
            es+=e;

            while(e){
                ds+=(e%10);
                e/=10;
            }

        }

        return (ds - es >=0) ? ds-es : es-ds;}

int findDsum(int e){
    int ds = 0;
     while(e){
      ds+=(e%10);
        e/=10;
    }
    return ds;
}

 int differenceOfSum(vector<int>& nums) {
        int ds = 0;
        int es = 0;
        for(int i = 0;i<nums.size();i++){
            int e = nums[i];
            es+=e;
            ds+=findDsum(e);
        }

        return abs(ds - es);
 }

int main(){

    return 0;
}
