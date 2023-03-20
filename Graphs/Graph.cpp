#include<iostream>
#include<vector>
#include<queue>
#include<stack>
 
#include "Graph.hpp"

Graph::Graph() {
}

Graph::~Graph() {
   for (auto node : nodes) {
        delete node;
   }
}

void Graph::addNode(string _name) {
    if (getNode(_name)) cout << "Node already exists" << endl;
    else nodes.push_back(new GraphNode(_name));
}

void Graph::addEdge(string _from, string _to) {
    GraphNode* from = getNode(_from);
    GraphNode* to = getNode(_to);

    if (from && to) {
        for (auto edge : from->adjList) {
            if (edge.end == to) {
                cout << "Edge already exists" << endl;
                return;
            }
        }
        from->adjList.push_back(GraphEdge(to));
    }
}

void Graph::addEdge(string _from, string _to, int _w) {
    GraphNode* from = getNode(_from);
    GraphNode* to = getNode(_to);

    if (from && to) {
        for (auto edge : from->adjList) {
            if (edge.end == to) {
                cout << "Edge already exists" << endl;
                return;
            }
        }
        from->adjList.push_back(GraphEdge(to, _w));
    }
}

void Graph::print() {
    for (auto node : nodes) {
        if (node->visited) cout << "(" << node->name << "*)->";
        else cout << "(" << node->name << ")->";
        for (auto edge : node->adjList) cout << edge.end->name << ",";
        cout << endl;
    }
}

GraphNode* Graph::getNode(string _u) {
    for (int i = 0; i < nodes.size(); i++) {
        if (nodes[i]->name == _u) return nodes[i];
    }
    return nullptr;
}

bool Graph::isEdge(string _from, string _to) {
    GraphNode* from = getNode(_from);
    GraphNode* to = getNode(_to);
    if (from && to) {
        for (auto edge: from->adjList) {
            if (edge.end == to) return true;
        }
    }
    return false;
}

void Graph::eraseMarks() {
    for (int i = 0; i < nodes.size(); i++) {
        nodes[i]->visited = false;
        nodes[i]->distance = -1;
    }
}

void Graph::depthFirstTraversal(string _src) {
    // implement    
}

void Graph::_depthFirstTraversal(GraphNode* s) {
    // implement
}

void Graph::breadthFirstTraversal(string _src) {
    // implement 
}

bool Graph::dfs(string _src, string _dst) {
    return false;
}

bool Graph::bfs(string _src, string _dst) {
    return false;
}


void Graph::DijsktraAlgorithm(string _src, string _dst) {
    // implement on Wednesday
}