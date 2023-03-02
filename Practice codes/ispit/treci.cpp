#include <iostream>
using namespace std;
typedef long long ll;

//za ovaj zadatak san malo primjenia gradivo diskretne a formulu za rekurzivnu relaciju san ukra sa ovog linka
//https://cs.uwaterloo.ca/journals/JIS/VOL12/Stenson/stenson8.pdf

int main(void){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        ll a1=2,a2=7,a3=22,a4=0;
        
        ll mod=1000000000+7;
        if(n==1){
            a4=2;
        }else if(n==2){
            a4=7;
        }else if(n==3){
            a4=22;
        }
        int j=4;
        
        //skracivanje vrimena
        if(n>5000){
            a3=569510255;
            a2=-143346998;
            a1=407666464;
            j=5000;
        }
        if(n>10000){
            a3=-240761206;
            a2=722493901;
            a1=-30272560;
            j=10000;
        }

        if(n>20000){
            a3=91531941;
            a2=-870583994;
            a1=-736721254;
            j=20000;
        }
        if(n>30000){
            a3=-255879882;
            a2=-88878069;
            a1=-812606051;
            j=30000;
        }
        if(n>40000){
            a3=-550238511;
            a2=-128086790;
            a1=-338464607;
            j=40000;
        }
        if(n>50000){
            a3=-536982213;
            a2=-663449754;
            a1=-800108874;
            j=50000;
        }
        if(n>100000){
            a3=20796244;
            a2=183609333;
            a1=-52434732;
            j=100000;
        }
        if(n>200000){
            a3=-177632729;
            a2=-405615100;
            a1=-298135856;
            j=200000;
        }
        if(n>300000){
            a3=-129712586;
            a2=-223471490;
            a1=-595840397;
            j=300000;
        }
        if(n>400000){
            a3=-400111386;
            a2=-354975970;
            a1=-345380909;
            j=400000;
        }
        if(n>500000){
            a3=509975400;
            a2=311521916;
            a1=724781071;
            j=500000;
        }
        if(n>600000){
            a3=159768604;
            a2=175636357;
            a1=-391220819;
            j=600000;
        }
        if(n>700000){
            a3=407296964;
            a2=447406032;
            a1=90993817;
            j=700000;
        }
        if(n>800000){
            a3=-352109816;
            a2=-472557740;
            a1=-287073678;
            j=800000;
        }
        if(n>900000){
            a3=200161732;
            a2=651065453;
            a1=193669648;
            j=900000;
        }
        for(j;j<=n;j++){

            /*if(j==700000){
                cout<<a3<<" "<<a2<<" "<<a1<<endl;
            }*/
            
            a4=((((3 * (a3 % mod) %mod + a2) % mod) - a1))%mod;
            ll a3r,a2r;
            a3r=a3;
            a2r=a2;
            a3=a4%mod;
            a2=a3r%mod;
            a1=a2r%mod;
        }
        cout<<(mod+a4)%mod<<endl;
        
        
    }
}