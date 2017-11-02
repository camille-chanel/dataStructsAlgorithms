// Binary Search Tree implementation w/ Print in Order
// By Camille Crumpton
// November 2, 2017

Node::Node(int nodeData) {
  data = nodeData;
  left = NULL;
  right = NULL;
}

bool Node::confirm(int value) {
  if (data == value) return true;
  if (value < data) {   // left child
    if (left == NULL) return false;
    left.confirm(value);
  }
  else {                // right child
    if (right == NULL) return false;
    right.confirm(value);
  }
}

void Node::insert(int value) {
  if (value <= data) {  // left child
    if (left == NULL) left = new Node(value);
    else left.insert(value);
  }
  else {                // right child
    if (right == NULL) right = new Node(value);
    else right.insert(value);
  }
}

void Node::remove(int value) {
}

void Node::printInOrder() {
  if (left != NULL) left.printInOrder();
  printf("%d\n", data);
  if (right != NULL) right.printInOrder();
}
