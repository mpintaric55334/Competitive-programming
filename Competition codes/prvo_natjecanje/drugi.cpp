#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int k;
    int l[n][60];
    int kl[n];
    int rj[n];
    
    int razl[n];
    for(int i=0;i<n;++i){
        int razlicito=0;
        int sum=0;
        int br_rj=0;
        int broj;
        cin>>k;
        kl[i]=k;
        int br_nula=0;
        for(int j=0;j<k;j++){
            if(broj!=0 || broj !=1){
                razlicito=1;
                
            }
            razl[n]=razlicito;
           cin>>broj;
           sum+=broj;
           l[i][j]=broj;
           if(l[i][j]==0){
               br_nula+=1;
           }
        }
        for(int j=0;j<k;j++){
            if(sum-l[i][j]==sum-1 && br_nula!=0 && k>2){
                br_rj+=1*br_nula*2;
            }else if(sum-l[i][j]==sum-1){
                br_rj+=1;
            }
        }
        if(sum-1==0){
            br_rj+=1;
        }
        rj[i]=br_rj;
    }
    for(int i=0;i<n;i++){
        if(razl[i]==0 && kl[i]>2){
            cout<<rj[i]-1<<endl;
        }else{
           cout<<rj[i]<<endl; 
        }
        
    }
}