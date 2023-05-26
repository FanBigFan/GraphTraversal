//
// Created by FanBig on 2023/5/26.
//

#include "Graph.h"

Graph::Graph(bool (*adjacentMatrix)[MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        this->vertices[i] = (char) ('A' + i);
        this->vNum++;
        this->visited[i] = false;
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (adjacentMatrix[i][j]) {
                this->edges[i][j] = true;
                this->eNum++;
            } else {
                this->edges[i][j] = false;
            }
        }
    }
}

void Graph::printGraph() {
    for (auto &edge: this->edges) {
        std::cout << "|";
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (edge[j] == 1) {
                std::cout << this->vertices[j] << " ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "|" << std::endl;
    }
    std::cout << std::endl;
}

void Graph::visit(int vertex) {
    std::cout << this->vertices[vertex] << " ";
}

int Graph::getFirstNeighbor(int vertex) {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (this->edges[vertex][i] && !this->visited[i]) {
            return i;
        }
    }
//    std::cout << "\nNo adjacent vertex...";
    return -1;
}

int Graph::nextNeighbor(int vertex, int neighbor) {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (this->edges[vertex][i] && i != neighbor && !this->visited[i]) {
            return i;
        }
    }
//    std::cout << "\nNo next adjacent vertex...";
    return -1;
}
