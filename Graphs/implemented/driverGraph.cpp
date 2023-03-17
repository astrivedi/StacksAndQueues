#include<iostream>
#include "Graph.hpp"

using namespace std;

int main() {
    Graph Gg;
    Gg.addNode("0");
    Gg.addNode("1");
    Gg.addNode("2");
    Gg.addNode("3");
    Gg.addNode("4");
    Gg.addNode("5");
    Gg.addNode("6");
    Gg.addNode("7");
    Gg.addNode("8");

    Gg.addEdge("0","1");
    Gg.addEdge("0","2");
    Gg.addEdge("1","3");
    Gg.addEdge("3","4");
    Gg.addEdge("4","1");
    Gg.addEdge("2","4");
    Gg.addEdge("2","5");
    Gg.addEdge("5","6");
    Gg.addEdge("7","6");
    Gg.addEdge("7","8");
    Gg.addEdge("8","7");

    Gg.print();
    Gg.depthFirstTraversal("0");
    Gg.print();


    return 0;
}