#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    int n;
    bool change=false;;
    int ax;
    int k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arraymain[n];
        for(int j=0;j<n;j++){
            cin>>arraymain[j];

        }
        int num_of_queries;
        cin>>num_of_queries;
        for(int q=0;q<num_of_queries;q++){
            int array[n];
            for(int z=0;z<n;z++){
                array[z]=arraymain[z];
            }
            cin>>ax;
            cin>>k;
            int broj=0;
            int arraycopy[n];
            int arraycopy2[n];
            for(int z=0;z<n;z++){
                arraycopy[z]=array[z];
            }
             int element=array[ax-1];
             int index;
                for(int o=0;o<n;o++){
                    if(arraycopy[o]==element){
                        index=o;
                        break;
                    }
                }
            for(int s=0;s<k;s++){
                change=false;
               
                sort(arraycopy,arraycopy+n);
                
                int br=0;
                int koliko=0;
                for(int m=0;m<n-1;m++){
                    int br=0;
                    int koliko=0;
                    if(arraycopy[m]==arraycopy[m+1]){
                        br+=1;
                        koliko+=1;
                    }else{
                        if(br>0){
                            for(int w=m-koliko;w<=m;w++){
                                arraycopy2[w]=br;
                                
                            }
                            br=0;
                            koliko=0;
                        }else{
                            arraycopy2[m]=1;
                        }
                    }
                    
                    
                    
                }
                if(arraycopy[n-1]!=arraycopy[n-2]){
                    arraycopy2[n-1]=1;
                }
                for(int z=0;z<n;z++){
                    if(arraycopy[z]!=arraycopy2[z]){
                        change=true;
                    }
                    arraycopy[z]=arraycopy2[z];
                }
                if(change==false){
                    break;
                }
                
               
                
            }
            cout<<arraycopy[index]<<endl;
        }
    }
}