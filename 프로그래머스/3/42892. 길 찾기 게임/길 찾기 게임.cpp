#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int id,x,y;
    Node *left = nullptr;
    Node *right = nullptr;
    
    Node(int id, int x, int y) : id(id), x(x), y(y) {}
};

class BinaryTree{
private:
    Node *root = nullptr;
    
    static bool compareNodes(Node *a, Node *b) {
        if(a->y != b->y)
            return a->y > b->y;
        return a->x < b->x;
    }
    
    Node *addNode(Node *current, Node *newNode){
    if(current == nullptr)
        return newNode;
    
    if(newNode->x < current->x)
        current->left = addNode(current->left, newNode);
    else
        current->right = addNode(current->right, newNode);
    return current;
}

void preOrder(Node *node, vector<int> &traversal){
    if(node == nullptr)
        return;
    traversal.push_back(node->id);
    preOrder(node->left, traversal);
    preOrder(node->right, traversal);
}

void postOrder(Node *node, vector<int> &traversal){
    if(node == nullptr)
        return;
    postOrder(node->left,traversal);
    postOrder(node->right,traversal);
    traversal.push_back(node->id);
}
    
public:
    BinaryTree() : root(nullptr) {}
    
    void buildTree(const vector<vector<int>> &nodeInfo) {
        vector<Node *> nodes;
        
        for(int i = 0 ; i < nodeInfo.size(); i++){
            nodes.push_back(new Node(i+1, nodeInfo[i][0], nodeInfo[i][1]));
        }
        
        sort(nodes.begin(),nodes.end(),compareNodes);
        
        for(Node *node : nodes){
            root = addNode(root, node);
        }
    }
    
    vector<int> getPreOrderTraversal(){
        vector<int> traversal;
        preOrder(root,traversal);
        return traversal;
    }
    
    vector<int> getPostOrderTraversal(){
        vector<int> traversal;
        postOrder(root,traversal);
        return traversal;
    }
    
};







vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
    
    BinaryTree tree;
    
    tree.buildTree(nodeinfo);
    vector<int> preOrder = tree.getPreOrderTraversal();
    vector<int> postOrder = tree.getPostOrderTraversal();
    
    
    return {preOrder,postOrder};
}