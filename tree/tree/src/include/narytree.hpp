#if !defined(__NARYTREE__)
#define __NARYTREE__

#include <vector>
class TreeNode {
public:
    int data;
    std::vector<TreeNode*> child;
    TreeNode(int data) {
        this->data = data;
    }
};

class NaryTree {
    TreeNode* node;
    int countNode(TreeNode* root);
    void printTree(TreeNode* root);
    TreeNode* inputLevel(int data);
    void displayTreeLevel(TreeNode* root);
    TreeNode* inputTree();
    int heightNode(TreeNode* root);
public:
    NaryTree() {
        node = inputTree();
    }
    NaryTree(int data) {
        node = inputLevel(data);
    }
    void printTree() {
        printTree(node);
    }
    int getCountNode() {
        return countNode(node);
    }
    int getHeight() {
        return heightNode(node);
    }
    void printLevelTree() {
        displayTreeLevel(node);
    }
};


#endif // __NARYTREE__
