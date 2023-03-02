#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

//dio koda besramno "posuden" sa https://www.geeksforgeeks.org/shortest-path-unweighted-graph/


void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void delete_edge(vector<int> adj[],int edge){
    vector<int> copy=adj[edge];
    for(int i=0;i<copy.size();i++){//prodi kroz sve susjede
        vector<int> copy2=adj[copy[i]];//vektor susjedtsva od susjednih sourcu
        vector<int> copy3;
        for(int j=0;j<copy2.size();j++){//sve osim soruceastavi
            if(copy2[j]!=edge){
                copy3.push_back(copy2[j]);
            }
        }
        adj[copy[i]]=copy3;
    }
    vector<int> empty;
    adj[edge]=empty;//prazan vektor
 
}

bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{
    
    list<int> queue;
 
    
    bool visited[v];
 
    
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
 
    
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);
 
    
    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);
 
                
                if (adj[u][i] == dest)
                    return true;
            }
        }
    }
 
    return false;
}

int printShortestDistance(vector<int> adj[], int s,
                           int dest, int v)
{
    
    int pred[v], dist[v];
 
    if (BFS(adj, s, dest, v, pred, dist) == false) {
        
        return -1;
    }
 
    
    vector<int> path;
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }
 
    
    return dist[dest];
 
    
}

int main(void){
    int N,M;
    cin>>N>>M;
    vector<int> adj[N];
    int x,y;
    for(int i=0;i<M;i++){
        cin>>x>>y;
        add_edge(adj,x-1,y-1);
    }
    int Q;
    int a;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>a;
        if(a==1){
            cin>>x;
            delete_edge(adj,x-1);
        }
        if(a==2){
            cin>>x>>y;
            cout<<printShortestDistance(adj,x-1,y-1,N);
            cout<<endl;
        }
    }
}