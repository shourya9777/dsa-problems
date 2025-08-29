#include<iostream>
using namespace std;

int main() {

    // //BRUTE FORCE O(n^2)

    // int arr[] = {1,8,6,2,5,4,8,3,7};
    // int n= sizeof(arr)/sizeof(int);
    // int w,ht,ans= 0, area;
    // for(int i=0;i<n;i++) {
    //     for(int j=i+1;j<n;j++) {
    //         w= j-i;
    //         ht= min(arr[i],arr[j]);
    //         area= w*ht;
    //         ans= max(ans,area);
    //     }
    // }
    // cout<<ans<<endl;

    // OPTIMAL APPROACH O(n)
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n= sizeof(arr)/sizeof(int);
    int w,ht,ans= 0;
    int lp=0, rp=n-1;
    while(lp<rp) {
        w= rp-lp;
        ht= min(arr[lp],arr[rp]);
        int currWater= w*ht;
        ans= max(ans, currWater);
        (arr[lp]<arr[rp])? lp++ : rp--;
    }
    cout<<ans<<endl;
    return 0;
}