#include <iostream>
#include "tree.hpp"

template <typename T>
Tree<T>::Tree() {
    root = new TreeNode<T>();
}

template <typename T>
Tree<T>::Tree(T data) {
    root = new TreeNode<T>(data);
}

// template <typename T>
// void Tree<T>::display() {
//     static TreeNode<T>* temp = root;
//     // if (temp == NULL) return;
//     std::cout << temp->data << std::endl;
//     for (long unsigned int i = 0; i < temp->children.size();i++) {
//         temp = temp->children[i++];
//         display();
//         std::cout << i;
//     }
// }

template <typename T>
void Tree<T>::addChild(T data) {
    TreeNode<T>* n = new TreeNode<T>(data);
    root->children.push_back(n);
}

template <typename T>
void Tree<T>::displayChild() {
    for (long unsigned int i = 0; i < root->children.size();i++) {
        std::cout << root->children.at(i)->data << std::endl;
    }
}

template <class T>
void display(TreeNode<T>* root) {
    // if (temp == NULL) return;
    std::cout << root->data << std::endl;
    for (long unsigned int i = 0; i < root->children.size();i++) {
        display(root->children[i]);
    }
}
template <class T>
TreeNode<T>* takeinput() {
    int data;
    std::cout << "Enter the data: ";
    std::cin >> data;
    TreeNode<T>* root = new TreeNode<T>();
    root->data = data;
    int n;
    std::cout << "Enter the no of child: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        TreeNode<T>* child = takeinput();
        root->children[i].push_back(child);
    }
    return root;
}