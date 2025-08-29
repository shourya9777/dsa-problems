#include<iostream>
using namespace std;

void printArray(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

int main() {

    //  BRUTE FORCE O(N^2)
    int a[]= {1,2,3,4};
    int n= sizeof(a)/sizeof(int);
    int ans[n];
    for(int i=0;i<n;i++) {
        ans[i]=1;
        for(int j=0;j<n;j++) {
            if(i==j)
                continue;
            else
                ans[i] *= a[j];
        }
    }
    printArray(ans,n);
    return 0;
}