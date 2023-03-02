#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int one,two,three;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>one;
        cin>>two;cin>>three;
        v.push_back(one);
        v.push_back(two);
        v.push_back(three);
        
    }
}