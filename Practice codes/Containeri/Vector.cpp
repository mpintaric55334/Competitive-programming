#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v1;
    for(auto i=0;i!=5;++i){
        v1.push_back(i);
        
    }
    for(auto i=v1.rbegin();i!=v1.rend();++i){
        cout<<*i<<endl;
    }
    cout<<v1.at(3)<<endl;
    cout<<v1.empty()<<endl;
    cout<<v1.max_size()<<endl;
}