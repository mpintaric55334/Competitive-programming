#include <iostream>
#include <set>
using namespace std;

int main(void){
    set<int,greater<int>> s1;
    s1.insert(15);
    s1.insert(10);
    s1.insert(3);
    for(auto i=s1.begin();i!=s1.end();++i){
        cout<<*i<<endl;
    }
}