#include<iostream>
using namespace std;
char nextchar(char ch){
    if(ch=='z')
        return 'a' ;
    else if(ch=='z')
        return 'A';
    return ++ch;
}
int main(){
   cout<<nextchar('Y');
return 0;
}
   