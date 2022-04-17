#include <iostream>
#include <queue>
#include <vector>
#include "./graphList.cpp"

bool isThereRoute(Graph * graph, Node * node_origin, Node * node_target) {
    std::queue<Node *> node_queue;

    node_queue.push(node_origin);
    while (!node_queue.empty()) {
        if (node_queue.front()->value_ == node_target->value_) return true;
        node_queue.front()->is_visited_ = true;
        for (Node * i : node_queue.front()->node_connections_) {
            if (i->is_visited_) continue;
            i->is_visited_ = true;
            node_queue.push(i);
        }
        node_queue.pop();
    }
    return false;
}