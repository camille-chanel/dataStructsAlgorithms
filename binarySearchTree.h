// Binary Search Tree header file
// By Camille Crumpton
// November 2, 2017

class Node {
  public:
    Node(int nodeData);
    bool confirm(int value);        // confirms if the value is in the tree
    void insert(int value);         // inserts the value into the tree (not balancing)
    void remove(int value);         // removes the value from the tree (not balancing)
    void printInOrder();            // prints the tree with in-order traversal
  private:
    int data;
    Node *left;
    Node *right;
};

class Tree {
  public:
    Node *root;
};
