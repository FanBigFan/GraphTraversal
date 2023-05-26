//
// Created by FanBig on 2023/5/26.
//

#include "Graph.h"

Graph::Graph(bool (*adjacentMatrix)[MAX_SIZE]) {
    // Constructor for Graph class
    // Initialize vertices, vNum, visited array, and edges array based on the adjacentMatrix

    for (int i = 0; i < MAX_SIZE; ++i) {
        this->vertices[i] = (char) ('A' + i); // Assigning vertex labels A, B, C, ...
        this->vNum++;                        // Increment the number of vertices
        this->visited[i] = false;            // Set visited array to false for all vertices

        for (int j = 0; j < MAX_SIZE; ++j) {
            if (adjacentMatrix[i][j]) {
                this->edges[i][j] = true; // If there is an edge between vertices i and j, set the corresponding element in the edges array to true
                this->eNum++;             // Increment the number of edges
            } else {
                this->edges[i][j] = false; // If there is no edge between vertices i and j, set the corresponding element in the edges array to false
            }
        }
    }
}

void Graph::printGraph() {
    // Print the graph in the form of an adjacency matrix

    for (auto &edge: this->edges) {
        std::cout << "|";
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (edge[j] == 1) {
                std::cout << this->vertices[j] << " "; // Print the vertex label if there is an edge
            } else {
                std::cout << "  "; // Print empty space if there is no edge
            }
        }
        std::cout << "|" << std::endl;
    }
    std::cout << std::endl;
}

void Graph::visit(int vertex) {
    // Visit a vertex by printing its label
    
    std::cout << this->vertices[vertex] << " ";
}

int Graph::getFirstNeighbor(int vertex) {
    // Get the index of the first unvisited neighbor of a vertex

    for (int i = 0; i < MAX_SIZE; i++) {
        if (this->edges[vertex][i] && !this->visited[i]) {
            return i;
        }
    }
    // std::cout << "No adjacent vertex..." << std::endl;
    return -1; // Return -1 if no adjacent unvisited vertex is found
}

int Graph::nextNeighbor(int vertex, int neighbor) {
    // Get the index of the next unvisited neighbor of a vertex after a given neighbor

    for (int i = 0; i < MAX_SIZE; i++) {
        if (this->edges[vertex][i] && i != neighbor && !this->visited[i]) {
            return i;
        }
    }
    //    std::cout << "No next adjacent vertex..." << std::endl;
    return -1; // Return -1 if no next adjacent unvisited vertex is found
}
