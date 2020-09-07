#include <iostream>
#include <queue>
#include "narytree.hpp"
using namespace std;

void NaryTree::printTree(TreeNode* root) {
    if (root == NULL) {
        cout << "Root is null plz correct" << endl;
        return;
    }
    cout << "Parent " << root->data << ": ";
    for (auto i = root->child.begin();i != root->child.end();i++) {
        cout << (*i)->data << " ";
    }
    cout << endl;

    for (long unsigned int i = 0;i < root->child.size();i++) {
        printTree(root->child[i]);
    }
}

TreeNode* NaryTree::inputTree() {
    // creating singl5e node
    int data;
    cout << "Enter the data for node: ";
    cin >> data;
    TreeNode* tempRoot = new TreeNode(data);
    // creating child for single node
    int childno = 0;
    cout << "Enter the number of child of " << data << " : ";
    cin >> childno;
    for (int i = 0; i < childno; i++) {
        TreeNode* child = inputTree();
        // inputTree will return one treenode which is constructed power of recursion :D
        tempRoot->child.push_back(child);
    }
    return tempRoot;
}

int NaryTree::countNode(TreeNode* root) {
    if (root == NULL) {
        cout << "Invalid input returning -1" << endl;
        return -1;
    }
    // as we know the total node in a tree is total number of child + 1
    int count = 1;
    for (long unsigned int i = 0;i < root->child.size();i++) {
        count += countNode(root->child[i]);
    }
    return count;
}

TreeNode* NaryTree::inputLevel(int data) {
    TreeNode* root = new TreeNode(data);
    queue<TreeNode*> children;
    children.push(root);
    while (!children.empty()) {
        TreeNode* front = children.front();
        // input of children
        int childno;
        cout << "Enter the number of children of " << front->data << " : ";    cin >> childno;
        for (auto i = 0; i < childno; i++) {
            cout << "Enter the data for child " << i + 1 << " : ";      cin >> data;
            TreeNode* temp = new TreeNode(data);
            children.push(temp);
            front->child.push_back(temp);
        }
        children.pop();
    }
    return root;
}

void NaryTree::displayTreeLevel(TreeNode* root) {
    if (root == NULL) {
        cout << "Invalid input stopping execution" << endl;
        return;
    }
    queue<TreeNode*> children;
    children.push(root);
    while (!children.empty()) {
        TreeNode* front = children.front();
        cout << "Parent: " << front->data << "=> ";
        for (auto i = 0; i < front->child.size(); i++) {
            cout << front->child.at(i)->data << " ";
            children.push(front->child.at(i));
        }
        cout << endl;
        children.pop();
    }

}

int NaryTree::heightNode(TreeNode* root) {
    if (root == NULL) {
        cout << "Invalid input returning -1" << endl;
        return -1;
    }
    // as we know the total node in a tree is total number of child + 1
    int count = 0;
    for (auto i = 0; i < root->child.size(); i++) {
        int temp = heightNode(root->child[i]);
        count = max(count, temp);
    }
    return count + 1;
}
