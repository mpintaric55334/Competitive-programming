#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    int k;
    int pomocni;
    cin>>n;
    int kl[n];
    int a[n][10000]={};
    for(int i=0;i<n;i++){
        cin>>k;
        kl[i]=k;
        vector<int> v3;
        int b[10000];
        for(int j=0;j<k;j++){
            cin>>pomocni;
            v3.push_back(pomocni);
        }
        if(v3.size()%2==0){
            for(int j=0;j<=k-2;j+=2){
               
                b[j]=(-1)*v3[j+1];
                b[j+1]=v3[j];
                //comon denominator
                int maxs=1;
                for(int s=1;s<100;s++){
                    if(b[j]%s==0 && b[j+1]%s==0){
                        maxs=s;
                    }
                }
                b[j]=b[j]/maxs;
                b[j+1]=b[j+1]/maxs;
            }
        }else{
            b[0]=(-1)*(v3[1]+v3[2]);
            b[1]=v3[0];
            b[2]=v3[0];
            for(int j=3;j<k;j+=2){
                
                b[j]=(-1)*v3[j+1];
                b[j+1]=v3[j];
                //comon denominator
                int maxs=1;
                for(int s=1;s<100;s++){
                    if(b[j]%s==0 && b[j+1]%s==0){
                        maxs=s;
                    }
                }
                b[j]=b[j]/maxs;
                b[j+1]=b[j+1]/maxs;
            }

        }
        for(int j=0;j<k;j++){
            a[i][j]=b[j];
        }

    }
    for(int i=0;i<n;i++){
        int j=0;
        for(int j=0;j<kl[i];j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}