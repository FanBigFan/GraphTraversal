//
// Created by FanBig on 2023/5/26.
//

#ifndef DFT_GRAPH_H
#define DFT_GRAPH_H

#include <iostream>

#define MAX_SIZE 5

class Graph {
public:
    char vertices[MAX_SIZE]{};
    bool edges[MAX_SIZE][MAX_SIZE]{};
    int vNum = 0;
    int eNum = 0;
    bool *visited = new bool[MAX_SIZE];

    explicit Graph(bool adjacentMatrix[MAX_SIZE][MAX_SIZE]);

    void printGraph();

    void visit(int vertex);

    int getFirstNeighbor(int vertex);

    int nextNeighbor(int vertex, int neighbor);
};


#endif //DFT_GRAPH_H
