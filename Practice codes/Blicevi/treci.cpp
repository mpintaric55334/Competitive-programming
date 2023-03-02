#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>

using namespace std;
typedef long long ll;

//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
//dio koda ukrao sa ovog linka
int minDistance(int dist[], bool sptSet[],int V)
{
   
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}



int main(void){
    int N,M;
    cin>>N>>M;
    int matrica[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matrica[i][j]=0;
        }
        
    }
    int x,y,p;
    for(int i=0;i<M;i++){
        cin>>x>>y>>p;
        matrica[x-1][y-1]=p;
    }
    int src=0;
    int dist[N]; // The output array.  dist[i] will hold the shortest
    // distance from src to i
 
    bool sptSet[N]; // sptSet[i] will be true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized
 
    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < N; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
 
    
    dist[src] = 0;
 
   
    for (int count = 0; count < N - 1; count++) {
       
        int u = minDistance(dist, sptSet,N);
 
       
        sptSet[u] = true;
 
        for (int v = 0; v < N; v++)
 
            if (!sptSet[v] && matrica[u][v] && dist[u] != INT_MAX
                && dist[u] + matrica[u][v] < dist[v])
                dist[v] = dist[u] + matrica[u][v];
    }
    for(int i=0;i<N;i++){
        cout<<dist[i]<<" ";
    }
    sort(dist,dist+N);
    ll suma=0;
    for(int j=0;j<N-1;j++){
        suma+=dist[j]*2;
    }
    suma+=dist[N-1];
    cout<<suma<<endl;


}