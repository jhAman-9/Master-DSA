//      *
//      *
//      *
//      *
//      *
// **********
//      *
//      *
//      *
//      *


#include<iostream>
using namespace std;
int main(){
    int n;  // here the given size is always odd
    cout<<"Enter the size in ODD";
    cin>>n;
    int mid = n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(mid==i || mid==j)  cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
}