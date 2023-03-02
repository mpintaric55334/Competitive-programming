#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int Mmax=0;
    int max=0;
    int prvi=0;
    int drugi;
    for(int i=0;i<n;++i){
        cin>>drugi;
        if(drugi>=prvi){
            max+=1;
            prvi=drugi;
            if(max>=Mmax){
                Mmax=max;
            }
        }else{
            max=1;
            prvi=drugi;
        }
    }
    cout<<Mmax;
    
    

}