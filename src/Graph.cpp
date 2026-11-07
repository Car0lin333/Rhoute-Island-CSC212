#include "Graph.h"

void Graph::addVertex(int id, std::string location){
    vertices.push_back({id, location});
    adj.push_back({});                      // grow adj with vertices
}

void Graph::addEdge(int from, int to, int weight){
    Edge e = {from, to, weight};
    adj[from].push_back(e);

    Edge revE = {to, from, weight};
    adj[to].push_back(revE);
}
