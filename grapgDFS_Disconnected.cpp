// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    private:
        void DFSUtil(int v);

    public:
        map<int, int> visited;
        map<int, list<int>> adj;

        void addEdge(int v, int w);
        void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v)
{
    list<int>::iterator i;
    visited[v] = true;
    for(i = adj[v].begin(); i < adj[v].end(); ++i)
    {
        if(!visited[*i])
        {
            DFSUtil(*i);
        }
    }
}

void Graph::DFS(int v)
{
    if (auto i : adj) // for x in adj if vis[1] == false, 
    {
        if(visited[i.first] == false)
        {
            DFSUtil(i.first);
        }
    }
}