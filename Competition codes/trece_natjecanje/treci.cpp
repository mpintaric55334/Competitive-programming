#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int k;
        cin>>n;
        cin>>k;
        int l[n];
        for(int j=0;j<n;j++){
            cin>>l[n];
        }
        ll num=1;
        k+=1;
        ll mnozitelj;
        for(int j=0;j<n-1;j++){
            mnozitelj=pow(10,l[j]+1)-1;
            if(k<mnozitelj){
                num+=k*pow(10,l[j]);
                break;
            }else{
                num+=mnozitelj*pow(10,l[j]);
                k-=mnozitelj;
            }
        }
        cout<<num<<endl;


    }
    
}