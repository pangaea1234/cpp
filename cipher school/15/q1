#include<bits/stdc++.h>
using namespace std;

// brute force approach O(M*N)
int countOnes(vector<vector<int>>&mat){
    int maxi = 0;
    int c = 0;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[i].size();j++){
            if(mat[i][j] == 1)c++;
        }
        maxi = max(maxi,c);
        c = 0;
    }

    return maxi;
}

// optimized O(M*log(N)) using binary search
int countOnes(vector<vector<int>>&mat){
    int maxi = 0;
    for(int i = 0;i<mat.size();i++){
        int ind = lower_bound(mat[i].begin(),mat[i].end(),1) - mat[i].begin();
        int c = mat[i].size() - ind;
        maxi = max(maxi,c);
    }

    return maxi;
}

int main(){

    return 0;
}
