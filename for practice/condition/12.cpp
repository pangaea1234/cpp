//switch condition
#include <bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout<<"Enter number of a day you want to display: ";
    cin>>age;
    switch(age) {
        case 1:
        cout<<"Its monday";
        break;
        case 2:
        cout<<"Its thuesday";
        break;
        case 3:
        cout<<"Its wednusday";
        break;
        case 4:
        cout<<"Its thursday";
        break;
        case 5:
        cout<<"Its friday";
        break;
        case 6:
        cout<<"Its saturday";
        break;
        case 7:
        cout<<"Its sunday";
        break;
        default :
        cout<<"Their is only 7 days in a weak";
    }

    return 0;
}