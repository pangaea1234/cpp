//nested loop (how to make table)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,j;
    for(i=1;i<11;i++) {
        cout<<"The Table of is : "<<i<<endl;
        for(j=1;j<11;j++) {
            cout<<j*i<<endl;
        }
    }
    return 0;
}