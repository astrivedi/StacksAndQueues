#pragma once
#include<iostream>
using namespace std;
#include<vector>

/*****************************************************************************
 * 
 *    Graph = List of GraphNodes 
 *    GraphNode = Struct (name, visited, distance, List of GraphEdges)
 *    GraphEdge = Struct (*endNode, weight)
 *    
 * ***************************************************************************/
struct GraphNode;

struct GraphEdge {
    GraphNode* end;
    int weight;
    GraphEdge() {end = nullptr; weight = 0;}
    GraphEdge(GraphNode* _e) {end = _e; weight = 0;}
    GraphEdge(GraphNode* _e, int _w) {end = _e; weight = _w;}
};

struct GraphNode {
    string name;
    bool visited;
    int distance;
    vector<GraphEdge> adjList;

    GraphNode() {
        name ="";
        visited = false;
        distance = -1;
    }

    GraphNode(string _name) {
        name = _name;
        visited = false;
        distance = -1;
    }
};  

class Graph {
    vector<GraphNode*> nodes;

    public:
    Graph();
    ~Graph();

    void addNode(string _name);
    void addEdge(string _from, string _to);
    void addEdge(string _from, string _to, int _w);

    void print();

    void depthFirstTraversal(string _src); 
    void breadthFirstTraversal(string _src); 

    bool dfs(string _src, string _dst);
    bool bfs(string _src, string _dst);

    void DijsktraAlgorithm(string _src, string _dst);

    private:
    
    GraphNode* getNode(string _name);
    bool isEdge(string _from, string _to);
    void eraseMarks();
    void _depthFirstTraversal(GraphNode* s);
};