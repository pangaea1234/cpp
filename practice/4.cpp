//Operators
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e,f,g,h,i,j,k;
    cout<<"enter the number a :";
    cin>>a;
    cout<<"enter the nunber b :";
    cin>>b;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    h=a++;//post increment a+1
    i=++a;//pre increment (a+1) + 1
    j=a--;//post decrement ((a+1) + 1) -1
    k=--a;//pre decrement [{(a+1) + 1} -1] -1
    cout<<"The addition of number a and b is : " <<c<<endl;
    cout<< "The substraction of number a and b is : " <<d<<endl;
    cout<< "The multiplication of number a and b is : " <<e<<endl;
    cout<< "The division of number a and b is : " <<f<<endl;
    cout<< "The Remainder of number a and b is : " <<g<<endl;
    cout<< "The post increment of number a  is : " <<h<<endl;
    cout<< "The pre increment of number a  is : " <<i<<endl;
    cout<< "The post decrement of number a  is : " <<j<<endl;
    cout<< "The pre decrement of number a is : " <<k<<endl;
    }