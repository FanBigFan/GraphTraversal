//
// Created by FanBig on 2023/5/26.
//

#include "BreadFirstTraversal.h"

void BreadFirstTraversal::breadFirstTraversal(Graph graph, int start) {
    graph.visit(start);
    graph.visited[start] = true;

    MyQueue<int> mq;
    mq.offer(start);

    while (!mq.isEmpty()) {
        start = mq.poll();
        for (int neighbor = graph.getFirstNeighbor(start);
             neighbor >= 0; neighbor = graph.nextNeighbor(start, neighbor)) {
            if (!graph.visited[neighbor]) {
                graph.visit(neighbor);
                graph.visited[neighbor] = true;
                mq.offer(neighbor);
            }
        }
    }
}
