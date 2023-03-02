#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/
//algoritam sam ukrao sa ovog linka
// iPair ==>  Integer Pair
typedef pair<int, int> iPair;
typedef long long ll;
  
 
class Graph
{
    int V;   
    list< pair<int, int> > *adj;
  
public:
    Graph(int V);  
    void addEdge(int u, int v, int w);
  
    // prints shortest path from s
    vector<int> shortestPath(int s);
};
  
// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
  
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
  
// Prints shortest paths from src to all other vertices
vector<int> Graph::shortestPath(int src)
{
    
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    
    vector<int> dist(V, INF);
  
    
    pq.push(make_pair(0, src));
    dist[src] = 0;
  
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        
        int u = pq.top().second;
        pq.pop();
  
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;
  
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
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
    Graph g(N);
    for(ll i=0;i<M;i++){
        ll x,y,p;
        cin>>x>>y>>p;
        g.addEdge(x-1,y-1,p);
    }
    vector<int> dist=g.shortestPath(0);
    ll suma=0;
    sort(dist.begin(),dist.end());
    for(ll i=1;i<N-1;i++){
        suma+=dist[i]*2;
    }
    suma+=dist[N-1];
    cout<<suma;
}