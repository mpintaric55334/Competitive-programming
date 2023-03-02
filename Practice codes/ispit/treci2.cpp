#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

//za ovaj zadatak san malo primjenio gradivo diskretne a formulu za rekurzivnu relaciju sam ukrao sa ovog linka
//https://cs.uwaterloo.ca/journals/JIS/VOL12/Stenson/stenson8.pdf

int main(void){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        double rj;
        rj=2.136209209*pow(3.214319743,n-1)+0.03660532168*(0.4608111272,n-1)-0.1728145307*(-0.6751308706,n-1);
        rj+=0.5;
        rj=(ll)rj%1000000007;
        cout<<rj;
    }
}