#include<iostream>
using namespace std;
bool isprime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int range;
    cout<<"enter range";
    cin>>range;
for(int i=2;i<=range;i++)
{
    if(isprime(i))
    {
        cout<<i;
    }
    else{
        continue;
    }
}
}



