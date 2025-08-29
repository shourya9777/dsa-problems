#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& vec, int key, int st, int end) {
    if(st>end)
        return -1;
    int mid= st + (end-st)/2;
    if(vec[mid]> key) 
        return binSearch(vec, key, st, mid-1);
    else if(vec[mid]< key) 
        return binSearch(vec, key, mid+1, end);
    else if(vec[mid]==key) 
        return mid;
}


int main() {
    vector<int> vec= {1,2,3,4,5};
    int n= vec.size();
    int idx= binSearch(vec, 7, 0,n-1);
    if(idx!= -1)
        cout<<"Found at index: "<<idx;
    else
        cout<<"Element not found!";

    return 0;
}