// Time Complexity : O(V+E) where V is the number of nodes and E is the number of Edges
// Space Complexity : O(V) where V is the number of nodes
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<pair<int,int>>> &Graph,vector<bool> &visited,queue<int> &q,int u) 
{
    q.push(u);
    visited[u]=true;
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        cout<<current<<" ";
        for(auto &i:Graph[current])
        {
            if(!visited[i.first])
            {
                q.push(i.first);
                visited[i.first]=true;
            }
        }
    }
}

int main()
{
    int nodes,edges,u,v,weight;
    cout<<"Enter the number of nodes you want to enter in the Graph : ";
    cin>>nodes;
    // For the weighted graph pair is required but for non weighted graph the pair is not required
    vector<vector<pair<int,int>>> Graph(nodes);
    vector<bool> visited(nodes,false);
    queue<int> q;
    cout<<"Enter the number of edges you want to enter in the Graph : ";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the edge from node to node and then weight in format -> (node1 node2 weight) : "; 
        cin>>u>>v>>weight;
        // For the directed graph only single is required but for the undirected graph both are required
        Graph[u].push_back({v,weight});
        Graph[v].push_back({u,weight});
    }
    cout<<"BFS traversal of the adjacency list Graph is : ";
    bfs(Graph,visited,q,0);
    cout<<endl;
    return 0;
}