//condition if elseif
#include <bits/stdc++.h>
using namespace std;
int main()  {
    int age=30;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<10) {
        cout<<"you are child"<<endl;
    }
    else if(age<18) {
        cout<<"you are teenager"<<endl;
    }
    else {
        cout<<"you are a adult"<<endl;
    }

    return 0;
}