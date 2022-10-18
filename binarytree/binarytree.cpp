#include "binarytree.h"

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTreePreOrder(Node* root){
    if (root == nullptr) return;
    cout << root->data << endl;
    printTreePreOrder(root->left);
    printTreePreOrder(root->right);
}

void printTreeInOrder(Node* root){
    if (root == nullptr) return;
    printTreeInOrder(root->left);
    cout << root->data << endl;
    printTreeInOrder(root->right);
}

void printTreePostOrder(Node* root){
    if (root == nullptr) return;
    printTreePostOrder(root->left);
    printTreePostOrder(root->right);
    cout << root->data << endl;
}

void binaryTree(){
    // Level 1
    Node* root = createNode(1);
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    // Depth First Traversals
    cout << "preorder algorithm" << endl;
    printTreePreOrder(root);
    cout << "inorder algorithm" << endl;
    printTreeInOrder(root);
    cout << "postorder algorithm" << endl;
    printTreePostOrder(root);

    cin.get();
}