
#include <iostream>
#include <string>

// arrays and lists
#include <vector>
#include <forward_list>
#include <list>
#include <iterator>

// stacks and queue
#include <stack>
#include <queue>
#include <deque>

// sets and maps
#include <map>
#include <set>
#include <iterator>

// STL containers
#include "./array.cpp"
#include "./linkedList.cpp"
#include "./stack.cpp"
#include "./queue.cpp"
#include "./deque.cpp"
#include "./priorityQueue.cpp"
#include "./set.cpp"
#include "./map.cpp"

// Trees and Graphs
#include "./binaryTree.cpp"
#include "./binarySearchTree.cpp"
#include "./minHeap.cpp"
//#include "./graphList.cpp"

// exercises
#include "./isUniqueString.cpp"
#include "./checkPermutation.cpp"
#include "./urlString.cpp"
#include "./isPalindromePermutation.cpp"
#include "./removeDuplicates.cpp"
#include "./returnKthToLast.cpp"
#include "./removeMiddleElement.cpp"
#include "./partitionList.cpp"
#include "./listSum.cpp"

#include "./isThereRoute.cpp"
#include "./minimalTree.cpp"
#include "./depthLists.cpp"
#include "./isBalanced.cc"

#include "./tripleStep.cc"

int main () {
    
    // vector experiments
    if (0) {
        // initialization modes
        std::cout << "parallel initialization" << std::endl;
        std::vector<int> batata{ 1, 2, 3, 4};
        vectorPrint(batata);
        
        std::cout << "serial initialization" << std::endl;
        std::vector<int> cheesium;
        cheesium.push_back(12);
        cheesium.push_back(15);
        cheesium.push_back(18);
        cheesium.pop_back();
        cheesium.push_back(33);
        cheesium.push_back(49);
        vectorPrint(cheesium);
        
        std::cout << "assign initialization method" << std::endl;
        cheesium.assign(3, 77);
        vectorPrint(cheesium);

        // modifying methods
        std::cout << "insert(pos, value) method" << std::endl;
        cheesium.insert(cheesium.begin() + 2, 99);
        vectorPrint(cheesium);
        
        std::cout << "erase(pos) method" << std::endl;
        cheesium.erase(cheesium.begin());
        vectorPrint(cheesium);

        std::cout << "erase(posIni, posEnd) for range" << std::endl;
        // reminder that erase includes posIni, but not posEnd
        cheesium.erase(cheesium.begin(), cheesium.begin() + 2);
        vectorPrint(cheesium);
    }

    // list experiments
    if (0) {
        std::list<int> myList;
        myList.push_back(3);
        myList.push_back(7);
        myList.push_back(14);
        myList.push_back(32);
        std::cout << "push_back/pop_back functionality:" << std::endl;
        myList.pop_back();
        printListElements(myList);
        std::cout << "push_back/pop_front functionality:" << std::endl;
        myList.push_back(73);
        myList.pop_front();
        printListElements(myList);

        std::cout << "front functionality:" << std::endl;
        std::cout << myList.front() << std::endl;
        std::cout << "emplace functionality:" << std::endl;
        std::cout << myList.back() << std::endl;

        std::cout << "reverse functionality" << std::endl;
        myList.reverse();
        printListElements(myList);

        std::cout << "insert/erase functionality" << std::endl;
        myList.insert(myList.begin(), 4);
        printListElements(myList);
        std::cout << std::endl;
        myList.insert(std::next(myList.begin(), 3), 17);
        printListElements(myList);
        std::cout << std::endl;
        myList.erase(std::prev(myList.end(), 2));
        printListElements(myList);

        std::cout << std::endl;
        std::cout << "sort functionality" << std::endl;
        myList.sort();
        printListElements(myList);        
    }
    
    // stack experiments
    if (0) {
        std::stack<int> myStack;
    
        // pop/push operations and interactions with parametrization
        myStack.push(3);
        myStack.push(30);
        myStack.push(23);
        myStack.push(16);
        myStack.push(98);
        std::cout << "first print attempt" << std::endl;
        printStack(myStack);
        std::cout << "second print attempt" << std::endl;
        printStack(myStack);
        std::cout << "size of the real container is " << myStack.size() << std::endl;
        std::cout << "first print with real value" << std::endl;
        while(!myStack.empty()) {
            std::cout << myStack.top() << std::endl;
            myStack.pop();
        }
        std::cout << "second print with real value" << std::endl;
        printStack(myStack);
        myStack.push(19);
        myStack.push(23);
        myStack.push(34);
        std::cout << "printing new stack example" << std::endl;
        printStack(myStack);
    }

    // queue experiments
    if (0) {
        // pop/push operations and interactions with parametrization
        std::queue<int> myQueue;
        std::cout << "first print attempt" << std::endl;
        myQueue.push(5);
        myQueue.push(15);
        myQueue.push(43);
        myQueue.push(79);
        myQueue.push(58);
        printQueue(myQueue);
        std::cout << "push/pop operations" << std::endl;
        myQueue.pop();
        myQueue.pop();
        myQueue.push(11);
        myQueue.push(14);
        printQueue(myQueue);
    }
    
    // deque experiments
    if (0) {
        // regular
        std::deque<int> myDeque;
        std::cout << "initialization of a deque" << std::endl;
        myDeque.push_back(5);
        myDeque.push_back(15);
        myDeque.push_back(25);
        myDeque.push_back(35);
        myDeque.push_back(45);
        printDeque(myDeque);
        std::cout << "push and pop operations at both sides" << std::endl;
        myDeque.pop_front();
        myDeque.pop_back();
        myDeque.push_front(99);
        myDeque.push_back(1);
        printDeque(myDeque);
        std::cout << "insert and emplace operations at the middle" << std::endl;
        myDeque.insert(myDeque.begin() + 2, 10);
        myDeque.insert(myDeque.end() - 3, 105);
        printDeque(myDeque);
        std::cout << "final manipulation" << std::endl;
        myDeque.pop_front();
        myDeque.pop_front();
        myDeque.emplace(myDeque.begin()+1, 77);
        printDeque(myDeque);
    }
    
    // priority_queue experiments
    if (0) {
        std::priority_queue<int> myPQ;
        std::cout << "priority_queue initializarion example" << std::endl;
        myPQ.push(15);
        myPQ.push(7);
        myPQ.push(22);
        myPQ.push(3);
        myPQ.push(48);
        myPQ.push(69);
        printPQ(myPQ);
        while(!myPQ.empty()) myPQ.pop();
        myPQ.push(-15);
        myPQ.push(-7);
        myPQ.push(-22);
        myPQ.push(-3);
        myPQ.push(-48);
        myPQ.push(-69);
        std::cout << "printing max-heap (decreasing) PQ" << std::endl;
        printPQ(myPQ);
        std::cout << "Printing min-heap (increasing) PQ" << std::endl;
        printReversePQ(myPQ);
        std::cout << "Popping top" << std::endl;
        myPQ.pop();
        printReversePQ(myPQ);
        std::cout << "Pushing crescent 45" << std::endl;
        myPQ.push(-45);
        printReversePQ(myPQ);
    }
    
    // set experiments
    if (0) {
        std::set<int> mySet;
        mySet.emplace_hint(mySet.begin(), 19);
        mySet.emplace_hint(mySet.begin(), 33);
        mySet.emplace_hint(mySet.begin(), 93);
        mySet.emplace_hint(mySet.begin(), 48);
        mySet.emplace_hint(mySet.begin(), 2);
        mySet.emplace_hint(mySet.begin(), 79);
        printSet(mySet);
        std::cout << "Using emplace_hint to insert/search for items returns an iterator to the item" << std::endl;
        std::cout << "index of element 48 is at " << *(mySet.emplace_hint(mySet.begin(), 48)) << std::endl;
        std::cout << "Using emplace to insert/search for items returns an iterator/boolen pair on the operation" << std::endl;
        std::cout << "Was element 50 inserted? " << mySet.emplace(50).second << std::endl;
        std::cout << "Was element 50 inserted? " << mySet.emplace(50).second << std::endl;
        std::cout << "Using insert to insert/search for items returns an iterator/boolen pair on the operation" << std::endl;
        std::cout << "Was element 78 inserted? " << mySet.insert(78).second << std::endl;
        std::cout << "Was element 78 inserted? " << mySet.insert(78).second << std::endl;
        std::cout << "Using count to search for items returns an boolen on the operation" << std::endl;
        std::cout << "Was element 78 inserted? " << mySet.insert(78).second << std::endl;
        std::cout << "Was element 78 inserted? " << mySet.insert(78).second << std::endl;
        std::cout << "End result of the insertions: " << std::endl;
        printSet(mySet);
        std::cout << "Removing recently added elements" << std::endl;
        mySet.erase(50);
        mySet.erase(78);
        printSet(mySet);
        std::cout << "Clearing all elements" << std::endl;
        mySet.clear();
        printSet(mySet);
    }

    // map experiments
    if (0) {
        std::map<std::string, int> myMap;
        myMap.insert(std::pair<std::string, int> {"queijo", 10});
        myMap.insert(std::pair<std::string, int> {"batata", 29});
        myMap.insert(std::pair<std::string, int> {"cenoura", 66});
        myMap.insert(std::pair<std::string, int> {"beterraba", 35});
        myMap.insert(std::pair<std::string, int> {"amido", 50});
        printMap(myMap);
        std::cout << "find operation:" << std::endl;
        std::cout << myMap.find("queijo")->second << std::endl;
        std::cout << myMap.find("queijo")->second << std::endl;
        std::cout << "count operation:" << std::endl;
        std::cout << myMap.count("beterraba") << std::endl;
        std::cout << "emplace_hint operation:" << std::endl;
        std::cout << myMap.emplace_hint(myMap.begin(), std::pair<std::string, int> {"cenoura", 80})->second << std::endl;
    }

    // isUnique
    if (0) {
        std::string myString("bigCheese");
        std::string myUniqueString("bigChes");
        std::cout << "isUniqueString exercise examples" << std::endl;
        std::cout << isUniqueString(myString) << std::endl;
        std::cout << isUniqueString(myUniqueString) << std::endl;
        std::cout << "isUniqueStringCompact exercise examples" << std::endl;
        std::cout << isUniqueStringCompact(myString) << std::endl;
        std::cout << isUniqueStringCompact(myUniqueString) << std::endl;
        return 0;
    }
    
    // isPermutation
    if (0) {
        std::cout << "checkPermutation exercise examples" << std::endl;
        std::string myString1("bigCheese");
        std::string myString2("Cheesebig");
        std::string myDifferentString("bigChes");
        std::cout << checkPermutation(myString1, myString2) << std::endl;
        std::cout << checkPermutation(myString1, myDifferentString) << std::endl;
        std::cout << "checkPermutationCompact exercise examples" << std::endl;
        std::cout << checkPermutationCompact(myString1, myString2) << std::endl;
        std::cout << checkPermutationCompact(myString1, myDifferentString) << std::endl;
    }

    // urlString
    if (0) {
        std::string myString("queijo queijinho queijao");
        std::cout << urlString(myString) << std::endl;
    }
    
    // isPalindromePermutation
    if (0) {
        std::string palindromeString("Tact Coa");
        std::string notPalindromeString("Quejo");
        std::cout << isPalindromePermutation(palindromeString) << std::endl;
        std::cout << isPalindromePermutation(notPalindromeString) << std::endl;
        std::string palindromeStringNew("Mega Queijo Mega Queijo");
        std::cout << isPalindromePermutation(palindromeStringNew) << std::endl;
    }

    // removeDuplicates
    if (0) {
        std::list<int> myList;
        myList.push_back(1);
        myList.push_back(3);
        myList.push_back(2);
        myList.push_back(3);
        myList.push_back(2);
        myList.push_back(4);
        myList.push_back(5);
        myList.push_back(13);
        myList.push_back(4);
        myList.push_back(15);
        myList.push_back(6);
        myList.push_back(15);
        myList.push_back(11);
        myList.push_back(11);
        myList.push_back(13);
        std::cout << "regular pushed list" << std::endl;
        std::list<int>::iterator it;
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;


        std::cout << "same structure solution" << std::endl;
        std::list<int> orderedList = myList;
        orderedList.sort();
        orderedList.unique();
        for (it = orderedList.begin(); it != orderedList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;

        std::cout << "support structures allowed solution" << std::endl;
        std::list<int> uniqueList;
        uniqueList = removeDuplicates(myList, 10);
        for (it = uniqueList.begin(); it != uniqueList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
    }

    // returnKthToLast
    if (0) {
        std::forward_list<int> myList;
        myList.push_front(1);
        myList.push_front(2);
        myList.push_front(3);
        myList.push_front(4);
        myList.push_front(5);
        myList.reverse();
        std::cout << "regular pushed list" << std::endl;
        std::forward_list<int>::iterator it;
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
        int index = 0;
        it = returnKthToLast(myList, index);
        std::cout << "The " << index << "th element from last in this list is " << *it << std::endl;
    }

    // removeMiddleElement
    if (0) {
        std::forward_list<int> myList;
        myList.push_front(1);
        myList.push_front(2);
        myList.push_front(3);
        myList.push_front(2);
        myList.push_front(5);
        myList.push_front(2);
        myList.push_front(7);
        myList.push_front(2);
        myList.push_front(3);
        myList.reverse();
        std::cout << "regular pushed list" << std::endl;
        std::forward_list<int>::iterator it;
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
        myList = removeMiddleElement(myList, 7);
        std::cout << "removed middle element" << std::endl;
        it = myList.begin();
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
    }

    // partitionList
    if (0) {
        std::forward_list<int> myList;
        myList.push_front(3);
        myList.push_front(5);
        myList.push_front(8);
        myList.push_front(5);
        myList.push_front(10);
        myList.push_front(2);
        myList.push_front(1);
        myList.reverse();
        std::cout << "regular pushed list" << std::endl;
        std::forward_list<int>::iterator it;
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
        myList = partitionList(myList, 5);
        std::cout << "partitioned list" << std::endl;
        for (it = myList.begin(); it != myList.end(); it++) {
            std::cout << *it << " - ";
        }
        std::cout << std::endl;
    }

    // listSum
    if (0) {
        std::forward_list<int> list1;
        list1.push_front(6);
        list1.push_front(6);
        list1.push_front(6);
        std::forward_list<int> list2;
        list2.push_front(4);
        list2.push_front(4);
        list2.push_front(4);
        
        std::cout << "list1 values:" << std::endl;
        std::forward_list<int>::iterator it1;
        for (it1 = list1.begin(); it1 != list2.end(); it1++) {
            std::cout << *it1 << " - ";
        }
        std::cout << std::endl;
        
        std::cout << "list2 values" << std::endl;
        std::forward_list<int>::iterator it2;
        for (it2 = list2.begin(); it2 != list2.end(); it2++) {
            std::cout << *it2 << " - ";
        }
        std::cout << std::endl;

        list1 = listSum(list1, list2);
        std::cout << "sum result list" << std::endl;
        for (it1 = list1.begin(); it1 != list2.end(); it1++) {
            std::cout << *it1 << " - ";
        }
        std::cout << std::endl;
    }

    // binary tree experiments
    if (0) {
        BinaryNode *leaf3 = new BinaryNode(2);
        BinaryNode *leaf4 = new BinaryNode(4);
        BinaryNode *leaf5 = new BinaryNode(45);
        BinaryNode *leaf6 = new BinaryNode(60);
        BinaryNode *leaf1 = new BinaryNode(5, leaf3, leaf4);
        BinaryNode *leaf2 = new BinaryNode(25, leaf5, leaf6);
        BinaryNode *root = new BinaryNode(10, leaf1, leaf2);
        std::cout << "in-order sweep of the tree" << std::endl;
        inOrderSweep(root);
        std::cout << "pre-order sweep of the tree" << std::endl;
        preOrderSweep(root);
        std::cout << "pos-order sweep of the tree" << std::endl;
        posOrderSweep(root);
    }

    // binary search tree experiment
    if (0) {
        BinarySearchNode * root = new BinarySearchNode(50);
        root->treeInsert(new BinarySearchNode(25));
        root->treeInsert(new BinarySearchNode(75));
        root->treeInsert(new BinarySearchNode(2));
        root->treeInsert(new BinarySearchNode(5));
        root->treeInsert(new BinarySearchNode(15));
        root->treeInsert(new BinarySearchNode(55));
        root->treeInsert(new BinarySearchNode(165));
        root->treeInsert(new BinarySearchNode(16));
        std::cout << "in-order sweep of the tree" << std::endl;
        inOrderSweep(root);
        std::cout << "pre-order sweep of the tree" << std::endl;
        preOrderSweep(root);
        std::cout << "pos-order sweep of the tree" << std::endl;
        posOrderSweep(root);
    }

    // min heap experiment
    if (0) {
        MinHeap *my_min_heap = new MinHeap(100);
        my_min_heap->insert(25);
        my_min_heap->insert(50);
        my_min_heap->insert(75);
        my_min_heap->insert(40);
        my_min_heap->insert(15);
        my_min_heap->insert(85);
        my_min_heap->insert(36);
        my_min_heap->insert(97);
        my_min_heap->insert(17);
        my_min_heap->insert(18);
        my_min_heap->insert(11);
        my_min_heap->printHeap();

        std::priority_queue<int> myPQ;
        myPQ.push(-100);
        myPQ.push(-25);
        myPQ.push(-50);
        myPQ.push(-75);
        myPQ.push(-40);
        myPQ.push(-15);
        myPQ.push(-85);
        myPQ.push(-36);
        myPQ.push(-97);
        myPQ.push(-17);
        myPQ.push(-18);
        myPQ.push(-11);
        while (!myPQ.empty()) {
            std::cout << (myPQ.top()*(-1)) << " ";
            myPQ.pop();
        }
        std::cout << std::endl;
        int minValue = my_min_heap->extractMin();
        std::cout << "value " << minValue << " extracted from heap. New heap:" << std::endl;
        my_min_heap->printHeap();
    }

    // graph experiment
    // isThereRoute exercise
    if (0) {
        std::vector<Node *> node_list;
        Node *node5 = new Node(5);
        Node *node4 = new Node(4);
        Node *node3 = new Node(3, {node4});
        Node *node2 = new Node(2, {node3});
        Node *node1 = new Node(1, {node3, node5});
        Node *node0 = new Node(0, {node1, node2});
        node_list.push_back(node0);
        node_list.push_back(node1);
        node_list.push_back(node2);
        node_list.push_back(node3);
        node_list.push_back(node4);
        node_list.push_back(node5);

        Node *node6 = new Node(6, {node0});
        node_list.push_back(node6);

        Graph * my_graph = new Graph(node_list);
        std::cout << "DFS trail" << std::endl;
        depthFirstSearch(my_graph, my_graph->node_list_[0]);
        my_graph->clearVisitedArray();
        std::cout << "BFS trail" << std::endl;
        breadthFirstSearch(my_graph, my_graph->node_list_[0]);
        my_graph->clearVisitedArray();
        std::cout << "is there a path from " << node0->value_ << " to " << node5->value_ << "? " << isThereRoute(my_graph, node0, node5) << std::endl;
        DfsCleanup(my_graph, my_graph->node_list_[0]);
        std::cout << "is there a path from " << node0->value_ << " to " << node6->value_ << "? " << isThereRoute(my_graph, node0, node6) << std::endl;
        DfsCleanup(my_graph, my_graph->node_list_[0]);
        std::cout << "is there a path from " << node2->value_ << " to " << node4->value_ << "? " << isThereRoute(my_graph, node2, node4) << std::endl;
        DfsCleanup(my_graph, my_graph->node_list_[0]);
        std::cout << "is there a path from " << node2->value_ << " to " << node1->value_ << "? " << isThereRoute(my_graph, node2, node1) << std::endl;
        DfsCleanup(my_graph, my_graph->node_list_[0]);
    }

    // minimal tree
    if (0) {
        std::vector<int> my_vector{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

        
        MTNode * tree_node = minimalTree(my_vector);
        inOrderMTSweep(tree_node);
    }
            
    // depth lists
    if (0) {
        // depth 3
        DLNode* child7 = new DLNode(7);
        DLNode* child8 = new DLNode(8);
        DLNode* child9 = new DLNode(9);
        DLNode* child10 = new DLNode(10);
        DLNode* child11 = new DLNode(11);
        DLNode* child12 = new DLNode(12);
        DLNode* child13 = new DLNode(13);
        DLNode* child14 = new DLNode(14);
        
        // depth 2
        DLNode* child5 = new DLNode(5, child11, child12);
        DLNode* child6 = new DLNode(6, child13, child14);
        DLNode* child3 = new DLNode(3, child7, child8);
        DLNode* child4 = new DLNode(4, child9, child10);
        // depth 1
        DLNode* child1 = new DLNode(1, child3, child4);
        DLNode* child2 = new DLNode(2, child5, child6);
        // depth 0
        DLNode* root = new DLNode(0, child1, child2);
        
        std::vector<std::list<DLNode*>> my_depth_vector = depthListGenerator(root);
        int index = 0;
        for (std::list<DLNode*> i : my_depth_vector) {
            std::cout << "beginning of depth list #" << index << std::endl;
            std::list<DLNode*>::iterator it = i.begin();
            while (it != i.end()) {
                std::cout << (*it)->value_ << " - ";
                it++;
            }
            std::cout << std::endl;
            index++;
        }

    }

    // isBalanced exercise
    if (0) {
        // depth 3
        IBNode* child7 = new IBNode(7);
        IBNode* child8 = new IBNode(8);
        IBNode* child9 = new IBNode(9);
        IBNode* child10 = new IBNode(10);
        IBNode* child11 = new IBNode(11);
        IBNode* child12 = new IBNode(12);
        IBNode* child13 = new IBNode(13);
        IBNode* child14 = new IBNode(14);
        
        // depth 2
        IBNode* child5 = new IBNode(5, child11, child12);
        IBNode* child6 = new IBNode(6, child13, child14);
        IBNode* child3 = new IBNode(3, child7, child8);
        IBNode* child4 = new IBNode(4, child9, child10);
        // depth 1
        IBNode* child1 = new IBNode(1, child3, child4);
        IBNode* child2 = new IBNode(2, child5, child6);
        // depth 0
        IBNode* root = new IBNode(0, child1, child2);

        std::cout << "Is IB Tree balanced? " << isTreeBalanced(root) << std::endl;

        // depth 3
        IBNode* b_child7 = new IBNode(7);
        
        // depth 2
        IBNode* b_child6 = new IBNode(6);
        IBNode* b_child3 = new IBNode(3, b_child7, nullptr);
        IBNode* b_child4 = new IBNode(4);
        // depth 1
        IBNode* b_child1 = new IBNode(1, b_child3, b_child4);
        IBNode* b_child2 = new IBNode(2, nullptr, b_child6);
        // depth 0
        IBNode* b_root = new IBNode(0, b_child1, b_child2);
        std::cout << "Is b_IB Tree balanced? " << isTreeBalanced(b_root) << std::endl;
    }

    // triple step exercise
    if (1) {
        int n = 1;
        std::cout << tripleStep(n) << std::endl;
        int n2 = 2;
        std::cout << tripleStep(n2) << std::endl;
        int n3 = 3;
        std::cout << tripleStep(n3) << std::endl;
        int n4 = 1000;
        std::cout << tripleStep(n4) << std::endl;
    }

}