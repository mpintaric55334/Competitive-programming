#include <iostream>
using namespace std;
int main(void){
    int n,k;
    cin>>n;
    cin>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            cout<<"Bum!"<<endl;
        }else if(to_string(i).find(to_string(k))<5 && to_string(i).find(to_string(k))>= 0){
            cout<<"Bum!"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}