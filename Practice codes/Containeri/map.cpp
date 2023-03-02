#include <iostream>
#include <map>
using namespace std;

int main(void){
    map<string,int> m1;
    m1.insert(pair<string,int>("matija",5));
    m1.insert(pair<string,int>("lovre",4));
    m1.insert(pair<string,int>("ocambus",5));
    m1.insert(pair<string,int>("matija",10));
    for(auto i=m1.begin();i!=m1.end();++i){
        i->second+=5;
    }
    for(auto i=m1.begin();i!=m1.end();++i){
        cout<<i->first<<" "<<i->second<<endl;
    }
}