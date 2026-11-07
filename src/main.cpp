#include <iostream>
#include "Graph.h"

int main() {
    Graph uriMap;

    uriMap.addVertex(0, "The Quad");
    uriMap.addVertex(1, "Library");
    uriMap.addVertex(2, "Student Union");
    uriMap.addVertex(3, "Hope Commons");

    // Quad <-> Library: 120s
    uriMap.addEdge(0, 1, 120);
    // Quad <-> Student Union: 90s
    uriMap.addEdge(0, 2, 90);
    // Library <-> Student Union: 180s
    uriMap.addEdge(1, 2, 180);
    // Student Union <-> Hope Commons: 60s
    uriMap.addEdge(2, 3, 60);

    std::cout << "Rhoute Island Graph Population Test\n";
    std::cout << "------------------------------------\n";

    // 3. Verify the population by printing neighbors
    for (const auto& vertex : uriMap.vertices) {
        std::cout << "Location: " << vertex.location << " (ID: " << vertex.id << ")\n";
        std::cout << "  Paths to: ";

        const auto& neighbors = uriMap.adj[vertex.id];
        for (const auto& edge : neighbors) {
            std::cout << "[" << uriMap.vertices[edge.to].location << " - " << edge.Weight << "s] ";
        }
        std::cout << "\n\n";
    }

    return 0;
}
