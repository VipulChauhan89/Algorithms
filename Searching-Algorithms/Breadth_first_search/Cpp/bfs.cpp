//Program to implement Breadth first search in undirected graph
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int>A[],int u,int v)
{
    A[u].push_back(v);
    A[v].push_back(u);
}
void bfs(vector<int>A[],vector<bool> visited,int u)
{
    queue<int> q;
    visited[u]=true;
    q.push(u);
    while(!q.empty())
    {
        u=q.front();
        cout<<u<<" ";
        q.pop();
        for(auto it:A[u])
        {
            if(!visited[it])
            {
                visited[it]=true;
                q.push(it);
            }
        }
    }
}
int main()
{
    int V,E,u,v;
    cout<<"Enter the vertices of the graph : ";
    cin>>V;
    vector<int>A[V];
    vector<bool>visited(V,false);
    cout<<"Enter the edges of the graph : ";
    cin>>E;
    for(int i=0;i<E;i++)
    {
        cout<<"Enter the edge "<<i+1<<" : ";
        cin>>u>>v;
        addEdge(A,u,v);
    }
    cout<<"Bfs traversal : ";
    bfs(A,visited,0);
    return 0;
}