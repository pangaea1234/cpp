#include <bits/stdc++.h>
using namespace std;
int main() {
   string firstName;
 //  cout << "Type your first name: ";
   //cin >> firstName;    // get user input from the keyboard =ranny lal
 //  cout << "Your name is: " << firstName<<endl; //print only ranny


   //here different method
   string fullname; 
   cout << "Type your full name: ";  
   getline (cin, fullname);
   
   cout << "Your name is: " << fullname<<endl;

// Type your full name: Ranny lal
// Your name is: ranny lal
    return 0;
}