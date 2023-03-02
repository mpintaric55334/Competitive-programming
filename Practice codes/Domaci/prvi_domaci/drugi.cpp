#include <iostream>

using namespace std;
bool distinct(int n){
    string str=to_string(n);
    for(int i=0;i<=3;++i){
        for(int j=i+1;j<=3;++j){
            if(str[i]==str[j]){
                return false;
            }
        }
    }
    return true;
}
int main(void){
    int n;
    cin>>n;
    n+=1;
    while(!distinct(n)){
        n+=1;
    }
    cout<<n;

}