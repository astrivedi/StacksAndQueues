#include<iostream>
#include<vector>
#include<queue>
#include<stack>
 
#include "Graph.hpp"

Graph::Graph() {
    // No bookkeeping required
}

Graph::~Graph() {
    // No bookkeeping required
}

void Graph::addNode(string _name) {
    GraphNode* tmp = getNode(_name);
    if (tmp) cout << " Node already exists" << endl;
    else {
        tmp = new GraphNode(_name);
        nodes.push_back(tmp);
    }
}

void Graph::addEdge(string _u, string _v) {
    if (isEdge(_u, _v)) cout << "Edge already exists" << endl;
    else {
        GraphNode* u = getNode(_u);
        GraphNode* v = getNode(_v);
        if (! u || !v) cout << " Node doesn't exist" << endl;
        else {
            GraphEdge e(v);
            u->adjList.push_back(e);
        }
    }
}

void Graph::print() {
    for (int i = 0; i < nodes.size(); i++) {
        cout << "(" << nodes[i]->name;
        if (nodes[i]->visited) cout << "*)"; else cout << ")";
        if (nodes[i]->distance != -1) cout << "[" << nodes[i]->distance << "]"; 
        for (int j = 0; j < nodes[i]->adjList.size(); j++) {
            cout << "->" << nodes[i]->adjList[j].end->name;
        }
        cout << endl;
    }
}

void Graph::depthFirstTraversal(string _src) {
    eraseMarks();
    GraphNode* s = getNode(_src);
    if (s) {   
        s->visited = true;
        cout << s->name << "..";
        _depthFirstTraversal(s);
        cout << endl;
    }
    else cout << "Node " << _src << "is not present" << endl;
}

void Graph::_depthFirstTraversal(GraphNode* s) {
    for (int i = 0; i < s->adjList.size(); i++) {
        if (s->adjList[i].end->visited != true) {
            s->adjList[i].end->visited = true;
            cout << s->adjList[i].end->name << " ..";
            _depthFirstTraversal(s->adjList[i].end);
        }
    }
}

void Graph::breadthFirstTraversal(string _src) {
    eraseMarks();
    GraphNode* s = getNode(_src);
    if (s) {   
        queue<GraphNode*> q;
        s->visited = true;
        s->distance = 0; 
        cout << s->name << "..";
        q.push(s);

        while (!q.empty()) {
            GraphNode* u = q.front();
            q.pop();
            for (int i = 0; i < u->adjList.size(); i++) {
                if (!u->adjList[i].end->visited) {
                    u->adjList[i].end->visited = true;
                    u->adjList[i].end->distance = u->distance + 1;
                    cout <<  u->adjList[i].end->name << "..";
                    q.push(u->adjList[i].end);
                }
            }
        }
        cout << endl;
    }
    else cout << "Node " << _src << "is not present" << endl;
}

bool Graph::dfs(string _src, string _dst) {
    return false;
}

bool Graph::bfs(string _src, string _dst) {
    return false;
}

GraphNode* Graph::getNode(string _u) {
    for (int i = 0; i < nodes.size(); i ++) {
        if (nodes[i]->name == _u) return nodes[i];
    }
    return nullptr;
}

bool Graph::isEdge(string _u, string _v) {
    GraphNode* u = getNode(_u);
    GraphNode* v = getNode(_v);

    if (!u || !v) return false;

    for (int i = 0; i < u->adjList.size(); i++) {
       if (u->adjList[i].end == v) return true; 
    }
    return false;
}

void Graph::eraseMarks() {
    for (int i = 0; i < nodes.size(); i++) nodes[i]->visited = false;
    for (int i = 0; i < nodes.size(); i++) nodes[i]->distance = -1;
}

void Graph::DijsktraAlgorithm(string _src, string _dst) {

}