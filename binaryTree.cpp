#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* leftchild;
    Node* rightchild;

    // Constructor for the node class
    Node(int value) {
        data = value;
        leftchild = nullptr;    // Initialize left child to null
        rightchild = nullptr;   // Initialize right child to null
    }
};

class BinaryTree {
public:
    Node* ROOT;

    BinaryTree() {
        ROOT = nullptr;
    }

};