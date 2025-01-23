// Time Complexity : O(V+E) where V is the number of nodes and E is the number of Edges
// Space Complexity : O(V+E) where V is the number of nodes and stack size for the recursive calls
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// using recursion
void dfs_using_recursion(vector<vector<pair<int,int>>> &Graph,vector<bool> &visited,int u)
{
    visited[u]=true;
    cout<<u<<" ";
    for(auto &i:Graph[u])
    {
        if(!visited[i.first])
        {
            dfs_using_recursion(Graph,visited,i.first);
        }
    }
}

//using iteration
void dfs_using_iteration(vector<vector<pair<int,int>>> &Graph,vector<bool> &visited,int u)
{
    stack<int> st;
    st.push(u);
    visited[u]=true;
    while(!st.empty())
    {
        int current=st.top();
        st.pop();
        cout<<current<<" ";
        for(auto &i:Graph[current])
        {
            if(!visited[i.first])
            {
                st.push(i.first);
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
    cout<<"DFS traversal of the adjacency list Graph is : ";
    dfs_using_recursion(Graph,visited,0);
    cout<<endl;
    return 0;
}