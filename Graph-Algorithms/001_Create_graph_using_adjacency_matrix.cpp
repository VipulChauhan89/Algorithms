#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int nodes,edges,u,v,weight;
    cout<<"Enter the number of nodes you want to enter in the Graph : ";
    cin>>nodes;
    vector<vector<int>> Graph(nodes,vector<int>(nodes,0));
    cout<<"Enter the number of edges you want to enter in the Graph : ";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the edge from node to node and then weight in format -> (node1 node2 weight) : ";
        cin>>u>>v>>weight;
        // For directed graph only one is required but for undirected both are required and if there is no weight then 1 is initialized
        Graph[u][v]=weight;
        Graph[v][u]=weight;
    }
    cout<<"The Adjacency Matrix representation of the Graph is as follows : "<<endl;
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<Graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}