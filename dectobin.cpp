#include<iostream>
using namespace std;
int dectobin(int n)
{
    int rem,pow=1,bin=0;
    while(n>0)
    {
        rem=n%2;
        bin=bin+(rem*pow);
        n=n/2;
        pow=pow*10;
    }
    return bin;
}
int main(){
    cout<<dectobin(10);
    return 0;
}