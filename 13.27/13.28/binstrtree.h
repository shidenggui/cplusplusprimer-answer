#ifndef BINSTRTREE_H
#define BINSTRTREE_H
#include "treenode.h"
class BinStrTree {
public:
    BinStrTree(TreeNode * const r = nullptr);
    BinStrTree(const BinStrTree &b);
private:
    TreeNode *root;
};
#endif
