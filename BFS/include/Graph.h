//
// Created by FanBig on 2023/5/26.
//

#ifndef BFS_GRAPH_H
#define BFS_GRAPH_H

#include <iostream>

#define MAX_SIZE 5

class Graph {
public:
    char vertices[MAX_SIZE]{};          // Array to store the vertices data of the graph
    bool edges[MAX_SIZE][MAX_SIZE]{};   // 2D array to represent the adjacency matrix
    int vNum = 0;                       // Number of vertices in the graph
    int eNum = 0;                       // Number of edges in the graph
    bool *visited = new bool[MAX_SIZE]; // Array to track visited vertices

    explicit Graph(bool adjacentMatrix[MAX_SIZE][MAX_SIZE]);

    void printGraph();

    void visit(int vertex);

    int getFirstNeighbor(int vertex);

    int nextNeighbor(int vertex, int neighbor);
};

#endif // BFS_GRAPH_H
