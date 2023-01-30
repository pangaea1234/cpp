// && || !
// if else condition
#include <bits/stdc++.h>
using namespace std; 
    int main() {
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        if(age>=4 && age<=13) { //eligible age between 4 to 13
            cout<<"You are eligible for ride."<<endl;
        }
        else {
            cout<<"Your are not eligible for ride."<<endl;
        }
        return 0;
}