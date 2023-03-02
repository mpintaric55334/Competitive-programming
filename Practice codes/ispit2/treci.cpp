#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



//dio koda besramno "posuden" sa https://www.geeksforgeeks.org/shortest-path-unweighted-graph/
//a i iskoristen kod za prvi zadatak

void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void delete_edge(vector<int> adj[],int edge,int edge2){
    vector<int> prvi=adj[edge];
    vector<int> drugi=adj[edge2];
    vector<int> copy1,copy2;
    for(int i=0;i<prvi.size();i++){
        if(prvi[i]!=edge2){
            copy1.push_back(prvi[i]);
        }
    }
    for(int i=0;i<drugi.size();i++){
        if(drugi[i]!=edge){
            copy2.push_back(drugi[i]);
        }
    }
    adj[edge]=copy1;
    adj[edge2]=copy2;
 
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



int main(void){
    int N;
    cin>>N;
    vector<int> adj[N];
    int x,y;
    for(int i=0;i<N-1;i++){
        cin>>x>>y;
        add_edge(adj,x-1,y-1);
    }
    int Q;
    char a;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>a;
        if(a=='-'){
            cin>>x>>y;
            delete_edge(adj,x-1,y-1);
        }
        if(a=='?'){
            cin>>x>>y;
            int pred[N],dist[N];
            
            if(BFS(adj,x-1,y-1,N,pred,dist)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
        }
    }
}