#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> vec= {1,2,3,4};
    vec.push_back(5);
    vec.pop_back(); // value present at last index is popped
    // for each loop
    for(int i:vec) { // i is the value present in the vector and not the index
        cout<<i<<" "; 
    }

    cout<< endl<<"Size= "<<vec.size()<<endl;
    cout<< vec.front()<<endl;
    cout<< vec.back()<<endl;
    cout<< vec.at(1);
    return 0;
}