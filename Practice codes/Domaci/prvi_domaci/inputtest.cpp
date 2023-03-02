#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> v;
    int n;
    for(int i=0;i<5;++i){
        cin>>n;
        v.push_back(n);
    }
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<endl;
    }
    return 0;
}