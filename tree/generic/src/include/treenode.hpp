#if !defined(_TREENODE_)
#define _TREENODE_
#include <vector>

template <typename T>
class TreeNode {
public:
    T data;
    std::vector<TreeNode*> children;

    TreeNode();
    TreeNode(T data);
};

#endif
