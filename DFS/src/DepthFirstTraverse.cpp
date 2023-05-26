//
// Created by FanBig on 2023/5/25.
//

#include "DepthFirstTraverse.h"

void DepthFirstTraverse::depthFirstTraverse(Graph graph, int start) {
    graph.visit(start);
    graph.visited[start] = true;

    for (int neighbor = graph.getFirstNeighbor(start); neighbor >= 0; neighbor = graph.nextNeighbor(start, neighbor)) {
        if (!graph.visited[neighbor]) {
            depthFirstTraverse(graph, neighbor);
        }
    }
    if (graph.vNum == MAX_SIZE) {
        return;
    }
}