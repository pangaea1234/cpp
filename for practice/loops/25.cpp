//Short Hand If...Else (Ternary Operator)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age :";
    cin>>age;
    string voting_age = (age>18)? "you are eligible to vote." : "you are not eligible to vote.";
    cout<<voting_age<<endl;
    return 0;
}