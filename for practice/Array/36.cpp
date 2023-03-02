/*Get the Size of an Array
To get the size of an array, you can use the sizeof() operator:*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);//now the output is 5
    cout << getArrayLength;
    return 0;
}