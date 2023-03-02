#include <iostream>
using namespace std;
int main(void){
    int t;
    int n;
    
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
            
            for(int s=0;s<k;s++){
                bool change=false;
                for(int l=0;l<n;l++){
                    broj=0;
                    for(int m=0;m<n;m++){
                        if(array[l]==array[m]){
                            broj+=1;
                        }
                    }
                
                     arraycopy[l]=broj;
                
                }
                for(int z=0;z<n;z++){
                    if(array[z]!=arraycopy[z]){
                        change=true;
                    }
                    array[z]=arraycopy[z];
                }
                
                if(change==false){
                    break;
                }
            }
            cout<<array[ax-1]<<endl;
        }
       
    }
}