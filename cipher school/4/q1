#include<bits/stdc++.h>

using namespace std;

vector<int> removeDublicate(vector<int>v){
    vector<int>ans;
    ans.push_back(v[0]);
    for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1])continue;
        ans.push_back(v[i]);
    }
    return ans;
}

int main(){
    vector<int>v = {1,2,2,2,3,3,4}; //{1,2,3,4}
    vector<int>ans = removeDublicate(v);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    return 0;
}
