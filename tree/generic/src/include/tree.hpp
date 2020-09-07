#if !defined(_TREE_)
#define _TREE_

#include "treenode.hpp"

template <typename T>
class Tree {
public:
    TreeNode<T>* root;

    Tree();
    Tree(T data);

    void addChild(T data);
    void displayChild();
};

template <class T>
void display(TreeNode<T>* root);
template <class T>
void takeinput();
#endif