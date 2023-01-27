#include<bits/stdc++.h>

using namespace std;

int findInd(int*arr,int num){ //int arr[]
    // sizeof(int) -> 4 
    // sizeo(float) -> 1 
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = -1;
    for(int i =0;i<size;i++){
        if(arr[i] == num){
            ans = i;
            break;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,1,2,3,2,5,8,11,10};
    int n;
    cin>>n;

    int ind = findInd(arr,n);

    if(ind != -1){
        cout<<"The index of the given number is "<<ind<<endl;
    }else cout<<"num is not present in the array"<<endl;

    return 0;
}
