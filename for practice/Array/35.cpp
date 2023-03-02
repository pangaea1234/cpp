/*Get the Size of an Array
To get the size of an array, you can use the sizeof() operator:*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);
     /*output is 20 instead of 5
     Reason: int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes. */

    return 0;
}