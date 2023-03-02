#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


//neke ideje u kodu su sa stranice https://www.geeksforgeeks.org/make-array-elements-equal-minimum-cost/ u slucaju sumnje na plagijat
ll minCostToMakeElementEqual(ll a[], int n)
{
 
    ll y;
    //ako je neparan broj elem
    if (n % 2 == 1)
        y = a[n / 2];
 
    //paran br elem
    else
        y = (a[n / 2] + a[(n - 2) / 2]) / 2;
 
    ll s = 0;
    for(int i = 0; i < n; i++)
        s += abs(a[i] - y);
         
    return s;
}
int main(void){
    int N;
    cin>>N;
    ll matrica[N][N];
    int velicina_podmatrica=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>matrica[i][j];
            if(j>i){
                velicina_podmatrica+=1;
            }
        }
    }
    ll gornja[velicina_podmatrica];
    int g=0;
    int d=0;
    ll donja[velicina_podmatrica];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<j){
                gornja[g]=matrica[i][j];
                g+=1;
            }
            if(i>j){
                donja[d]=matrica[i][j];
                d+=1;
            }
        }
    }
    sort(donja,donja+velicina_podmatrica);
    sort(gornja,gornja+velicina_podmatrica);
    ll rj1=minCostToMakeElementEqual(donja, velicina_podmatrica);
    ll rj2=minCostToMakeElementEqual(gornja, velicina_podmatrica);
    if(rj1<=rj2){
        cout<<rj1<<endl;
    }else{

        cout<<rj2<<endl;
    }
    

}