#include<iostream>
using namespace std;
int main() {
    int a[6]= {1,2,3};
    int b[3]= {2,5,6};
    int m=3, n=3;
    int idx= m+n-1, i=m-1, j=n-1;

    while(i>=0 && j>=0) {
        if(a[i]>=b[j]) {
            a[idx--]= b[j--];
        }
        else {
            a[idx--]= b[j--];
        }
    }

    while(j>=0) {
        a[idx--] = b[j--];
    }
}