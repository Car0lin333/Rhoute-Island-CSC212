#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <vector>

struct Vertex {
    int id;
    std::string location; // e.g., "Library"
};

struct Edge {
    int from;   // id of from
    int to;     // id of to
    int Weight; // time between two Verticies in seconds
};


class Graph{
public:
    // list of all vertices
    std::vector<Vertex> vertices;

    // adj[i] is the list of all Edges that start at vertex i
    std::vector<std::vector<Edge>> adj;

    void addVertex(int id, std::string location);
    void addEdge(int from, int to, int weight);
};

#endif // GRAPH_H
