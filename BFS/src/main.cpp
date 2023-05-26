//
// Created by FanBig on 2023/5/25.
//

#include "BreadFirstTraversal.h"
#include "PrintMap.h"

#define DFS_START 3

int main() {
    bool adjacentMatrix[MAX_SIZE][MAX_SIZE] = {
            {false, true,  true,  false, false},
            {true,  false, true,  true,  true},
            {true,  true,  false, true,  false},
            {false, true,  true,  false, true},
            {false, true,  false, true,  false},
    };

    Graph graph(adjacentMatrix);

    /**
    *           |  B C     |
    *           |A   C D E |
    *           |A B   D   |
    *           |  B C   E |
    *           |  B   D   |
    */
    graph.printGraph();

    /** MAP
     *                A
     *              /  \
     *            B-----C
     *          /  \  /
     *         E----D
     */
    PrintMap::printMap();

    std::cout << "DFS start from [" << graph.vertices[DFS_START] << "]" << std::endl;
    std::cout << "DFS: ";
    BreadFirstTraversal::breadFirstTraversal(graph, DFS_START);

    return 0;
}