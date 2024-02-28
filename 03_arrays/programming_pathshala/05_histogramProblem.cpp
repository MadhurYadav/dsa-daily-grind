#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[]={0,1,0,2,1,3,0,2};
    int i,amt=0;
    int PMAX[10];
    PMAX[0]=arr[0];
    for(i=1;i<8;i++){
        PMAX[i]=max(PMAX[i-1],arr[i]);
    }
    // cout<<PMAX[i]<<endl;
    int SMAX[10];
    SMAX[7]=arr[7];
    for(i=6;i>=0;i--) {
        SMAX[i]=max(SMAX[i+1],arr[i]);
    }
    // cout<<SMAX[i]<<endl;
    // int h=min(PMAX[i],SMAX[i]);
    for(i=1;i<8;i++) {
        int h=min(PMAX[i],SMAX[i]);
       if(h>arr[i]) {
           amt+=(h-arr[i]);
       }
    }
    cout<<amt;
    return 0;
}