//
// Created by FanBig on 2023/5/26.
//

#include "DepthFirstTraverse.h"
#include "PrintMap.h"

using namespace std;

int main() {
    bool adjacentMatrix[MAX_SIZE][MAX_SIZE] = {
            {false, true,  true,  false, false},
            {true,  false, true,  true,  true},
            {true,  true,  false, true,  false},
            {false, true,  true,  false, true},
            {false, true,  false, true,  false},
    };
//    bool adjacentMatrix[MAX_SIZE][MAX_SIZE] = {
//            {false, true,  true,  false, false, false, false, true,  true,  false},
//            {true,  false, true,  true,  false, false, false, false, false, false},
//            {true,  true,  false, false, false, false, false, false, true,  true},
//            {false, true,  false, false, true,  true,  true,  false, false, false},
//            {false, false, false, true,  false, true,  true,  false, false, true},
//            {false, false, false, true,  true,  false, false, false, false, false},
//            {false, false, false, true,  true,  false, false, true,  false, true},
//            {true,  false, false, false, false, false, true,  false, true,  false},
//            {true,  false, true,  false, false, false, false, true,  false, true},
//            {false, false, true,  false, true,  false, true,  false, true,  false}
//    };

    Graph graph(adjacentMatrix);

    graph.printGraph();
    cout << graph.vNum << " " << graph.eNum << endl;
//    for (int i = 0; i < MAX_SIZE; ++i) {
//        cout << graph.visited[i] << " ";
//    }
    cout << endl;

    /**
     *                A
     *              /  \
     *            B-----C
     *          /  \  /
     *         E----D
     */
    PrintMap::printMap();

    cout << "DFS: ";
    DepthFirstTraverse::depthFirstTraverse(graph, 3);
    return 0;
}