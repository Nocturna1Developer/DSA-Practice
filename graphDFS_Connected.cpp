// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include <bits/stdc++.h>
using namespace std;

class Graph
{
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

void Graph::DFS(int v)
{
    visited[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i < adj[v].end(); ++i)
    {
        if (visited[*i])
        {
            DFS(*i);
        }
    }
}