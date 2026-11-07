# Rhoute Island

A route-finding application for the University of Rhode Island campus that compares different graph search algorithms to find the most efficient walking paths based on time rather than distance.

## Project Overview

The goal of this project is to demonstrate how different search algorithms and data structures (specifically a binary min-heap) affect the performance and accuracy of finding the shortest path in a weighted road network.

## Implementation Plan

### Phase 1: Core Data Structures
- [ ] *Binary Min-Heap*: Implement a priority queue supporting `insert` and `extractMin` operations to power Dijkstra's and A* algorithms.
- [x] *Weighted Graph*: Create a graph representation where:
    - *Vertices*: Represent intersections or key campus locations.
    - *Edges*: Represent paths with weights corresponding to measured walking time (seconds).

### Phase 2: Search Algorithms
- [ ] *Breadth-First Search (BFS)*: Implement as a baseline to find the path with the fewest edges.
- [ ] *Dijkstra's Algorithm*: Implement to find the absolute shortest path based on walking time.
- [ ] *A\* Search*: Implement using a geographic heuristic (Euclidean distance) to optimize the search process.

### Phase 3: Data & Visualization
- [ ] *Campus Data Integration*: Build a dataset of URI campus locations and measured walking times.
- [ ] *Graphical Representation*: Develop a visualization to display the campus map and the paths calculated by the algorithms.

### Phase 4: Evaluation & Benchmarking
- [ ] *Performance Metrics*: Implement tracking for:
    - Search execution time.
    - Total route walking time.
    - Number of vertices explored.
    - Number of heap/queue operations.
- [ ] *Analysis*: Plot execution time against graph size and compare algorithm efficiency.

## Evaluation Plan
We will compare BFS, Dijkstra's, and A* on identical road-network data and start-end location sets to measure correctness and computational efficiency.
