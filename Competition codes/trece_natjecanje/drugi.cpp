#include <iostream>
using namespace std;
int main(void){
    int t;
    cin>>t;
    long long n;
    long long k;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>k;
        long long num_of_comp=1;
        long long sati=0;
        while(num_of_comp<n){

            if(num_of_comp<=k){
                num_of_comp+=num_of_comp;
                sati+=1;
            }else{
                if((n-num_of_comp)%k==0){
                    sati+=(n-num_of_comp)/k;
                }else{
                    sati+=(n-num_of_comp)/k+1;
                }
                break;
            }
        }
        cout<<sati<<endl;

    }
}