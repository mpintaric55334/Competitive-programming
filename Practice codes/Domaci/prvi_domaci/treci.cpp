#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int k;
    cin>>k;
    vector<int> v;
    int n;
    for(int i=0;i<k;++i){
        cin>>n;
        v.push_back(n);
    }
    int sum=0;
    for(auto i=v.begin();i!=v.end();++i){
        sum+=(*i);
    }
    cout<<(double)sum/k;
    return 0;
}