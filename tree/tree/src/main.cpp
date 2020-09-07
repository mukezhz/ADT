#include <iostream>
#include "narytree.hpp"
using namespace std;

int main(int argc, char const* argv[]) {
    NaryTree n(10);
    n.printLevelTree();
    // TreeNode* t1 = inputLevel();
    // for (auto i = t1->child.begin(); i != t1->child.end();i++) {
    //     cout << (*i)->data << endl;
    // }
    cout << n.getHeight() << endl;
    // displayTreeLevel(t1);
    // printTree(t1);
    // cout << "No of tree node: " << countNode(t1) << endl;
    // cout << "Height of tree: " << heightNode(t1) << endl;
    return 0;
}
// 10 2 20 1 40 0 30 2 50 1 70 1 80 0 60 0
// 10 2 30 1 40 0 20 0
// 10 2 20 30 1 50 1 40 0 0
// 10 2 20 30 1 40 0 1 50 2 60 70 1 80 0 0