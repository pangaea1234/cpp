#include <bits/stdc++.h>
using namespace std;
int main(){
    const int x = 15;
    x = 10;// showing error in this line because we use const so value of x is unchangable
    cout <<"print the value: "<<x;
    return 0;
}