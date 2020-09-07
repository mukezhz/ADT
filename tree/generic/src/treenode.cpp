#include <iostream>
#include "treenode.hpp"

template <typename T>
TreeNode<T>::TreeNode() {
    data = 0;
}

template <typename T>
TreeNode<T>::TreeNode(T data) {
    this->data = data;
}