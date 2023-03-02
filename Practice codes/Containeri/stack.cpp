#include <iostream>
#include <stack>
using namespace std;
int main(void){
    stack<int> s;
    s.push(20);
    s.push(15);
    s.push(11);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}