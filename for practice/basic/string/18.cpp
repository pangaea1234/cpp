//C++ uses the + operator for both addition and concatenation.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    int z = x + y; 
    cout<<"value of z is : "<<z<<endl;// addition 
    string a = "10";
    string b = "20";
    string c = a + b; 
    cout<<"value of c is : "<<c<<endl;//concatination

    return 0;
}