#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int nodes,edges,u,v,weight;
    cout<<"Enter the number of nodes you want to enter in the Graph : ";
    cin>>nodes;
     // if there is no weight then no pair is needed but in case of weight pair is needed
    vector<vector<pair<int,int>>> Graph(nodes);
    cout<<"Enter the number of edges you want to enter in the Graph : ";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the edge from node to node and then weight in format -> (node1 node2 weight) : ";
        cin>>u>>v>>weight;
        // In case of directed only one is required but in case of undirected graph both are required
        Graph[u].push_back({v,weight});
        Graph[v].push_back({u,weight});
    }
    cout<<"The Adjacency List representation of the Graph is as follows : "<<endl;
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<Graph[i].size();j++)
        {
            cout<<"{ "<<Graph[i][j].first<<" -> (weight)"<<Graph[i][j].second<<" },";
        }
        cout<<endl;
    }
    return 0;
}