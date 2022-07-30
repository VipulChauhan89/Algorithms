//Program to implement Depth first search in undirected graph
#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>A[],int u,int v)
{
    A[u].push_back(v);
    A[v].push_back(u);
}
void dfs(vector<int>A[],vector<bool> visited,int u)
{
    cout<<u<<" ";
    visited[u]=true;
    for(auto it:A[u])
    {
        if(!visited[it])
        {
            dfs(A,visited,it);
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
    cout<<"Dfs traversal : ";
    dfs(A,visited,0);
    cout<<endl;
    return 0;
}