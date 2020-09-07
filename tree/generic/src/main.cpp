#include <iostream>
#include "tree.hpp"
#include "treenode.cpp"
#include "tree.cpp"

int main(int argc, char const* argv[]) {
    Tree<int> t;
    // t.addChild(50);
    // t.addChild(100);
    // display(t.root);
    t.root = takeinput();
    return 0;
}
