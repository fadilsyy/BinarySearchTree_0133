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
        ROOT = nullptr; // Initialize ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode) {
        // This function searches the currentNode of the specified Node as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while((currentNode != nullptr) && (currentNode->data != element)) {
            parent = currentNode;
            if(element < currentNode->data) {
                currentNode = currentNode->leftchild;
            } else {
                currentNode = currentNode->rightchild;
            }
        }
    }

};

int main() {}