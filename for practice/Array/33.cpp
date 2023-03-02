/*Omit Array Size
In C++, you don't have to specify the size of the array. 
The compiler is smart enough to determine the size of the array based on the number of inserted values: */
#include <bits/stdc++.h>
using namespace std;
int main() {
    string cars[] = {"Volvo", "BMW", "Ford"}; // Three arrays
    //string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three arrays
    cout<<cars[2] <<endl;
    return 0;
}