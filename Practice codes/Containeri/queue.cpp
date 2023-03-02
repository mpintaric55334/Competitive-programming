#include <iostream>
#include <queue>
using namespace std;
void print_queue(queue<int> q){
    queue<int> qc=q;
    while(!qc.empty()){
        cout<<qc.front()<<" ";
        qc.pop();
    }
   
}
int main(void){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(2);
    print_queue(q);

}