#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> l;
    for(int i=0;i<n;++i){
        int v;
        cin>>v;
        l.push_back(v);

    }
    //max
    int max=l[0];
    int index=0;
    for(int i=0;i<n;++i){
        if(l[i]>max){
            max=l[i];
            index=i;
        }
    }
    int mcopy=m;
    int maxk=max+mcopy;
    int mink=max;
   
    bool moze=false;
    while(mcopy>0){
        moze=true;
    
        for(int i=0;i<n;i++){
            if((l[i]+1)<=mink){
                l[i]+=1;
                mcopy-=1;

                moze=false;
            }
            
            if(i==index && moze){
                mink+=1;
                l[i]+=1;
                mcopy-=1;
            }
        }

    }
    cout<<mink<<" "<<maxk;
    
    
}