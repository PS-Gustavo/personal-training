#include <vector>
#include <queue>
#include <iostream>

class Node {
    public:
    int value_;
    int associated_index_;
    std::vector<Node*> node_connections_;

    Node(int value) {
        this->value_ = value;
    }

    Node (int value, std::vector<Node *> node_connections_list) {
        this->value_ = value;
        this->node_connections_ = node_connections_list;
    }

    void connectNode(Node * node_connection) {
        (this->node_connections_).push_back(node_connection);
    }
};

class Graph {
    public:
    std::vector<Node*> node_list_;
    std::vector<bool> visited_list_;

    Graph() {
        node_list_.clear();
        visited_list_.clear();
    }

    Graph(Node *initialNode) {
        this->node_list_.push_back(initialNode);
        this->visited_list_.push_back(0);
    }

    Graph(std::vector<Node*> initialNode) {
        for (Node *element : initialNode) {
            this->node_list_.push_back(element);
            this->visited_list_.push_back(0);
            element->associated_index_ = (this->node_list_).size()-1;
        }
    }

    int insertElement(Node *element) {
        this->node_list_.push_back(element);
        this->visited_list_.push_back(0);
        element->associated_index_ = (this->node_list_).size()-1;
        return this->node_list_.size();
    }

    void clearVisitedArray() {
        this->visited_list_.assign(this->node_list_.size(), 0);
    }

};

    void depthFirstSearch(Graph * graph, Node * initialNode) {
        if (graph->visited_list_[initialNode->associated_index_]) return;
        graph->visited_list_[initialNode->associated_index_] = true;
        std::cout << initialNode->value_ << std::endl;
        for (Node * i : initialNode->node_connections_) {
            depthFirstSearch(graph, i);
        }
    }

    void breadthFirstSearch(Graph * graph, Node * initialNode) {
        std::queue<Node*> visit_order;
        visit_order.push(initialNode);

        while (!visit_order.empty()) {
            std::cout << visit_order.front()->value_ << std::endl;
            graph->visited_list_[visit_order.front()->associated_index_] = 1;
            for (Node * i : visit_order.front()->node_connections_) {
                if (!graph->visited_list_[i->associated_index_]) visit_order.push(i);
                graph->visited_list_[i->associated_index_] = 1;
            }
            visit_order.pop();
        }
        graph->clearVisitedArray();
    }