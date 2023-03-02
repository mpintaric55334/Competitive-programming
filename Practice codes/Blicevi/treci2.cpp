#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/
//algoritam sam ukrao sa ovog linka
using namespace std;
typedef long long ll;

  
// iPair ==> lleger Pair
typedef pair<ll, ll> iPair;
  

void addEdge(vector <pair<ll, ll> > adj[], ll u,
                                     ll v, ll wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
   
  

vector<ll> shortestPath(vector<pair<ll,ll> > adj[], ll V, ll src)
{
    
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    
    vector<ll> dist(V, LLONG_MAX);
  
    pq.push(make_pair(0, src));
    dist[src] = 0;
  
   
    while (!pq.empty())
    {
        
        ll u = pq.top().second;
        pq.pop();
  
       
        for (auto x : adj[u])
        {
            
            ll v = x.first;
            ll weight = x.second;
  
            
            if (dist[v] > dist[u] + weight)
            {
               
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
  
    return dist;
}
  
int main(void){
    ll N,M;
    cin>>N>>M;
    vector<iPair > adj[N];
    for(ll i=0;i<M;i++){
        ll x,y,p;
        cin>>x>>y>>p;
        addEdge(adj,x-1,y-1,p);
    }
    vector<ll> dist=shortestPath(adj,N, 0);
    ll suma=0;
    sort(dist.begin(),dist.end());
    for(ll i=1;i<N-1;i++){
        suma+=dist[i]*2;
    }
    suma+=dist[N-1];
    cout<<suma;

}