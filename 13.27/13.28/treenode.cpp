#include "treenode.h"
inline
TreeNode::TreeNode(const string &s, int c, TreeNode * const l, TreeNode * const r):
    value(s), count(c), left(l), right(r){}
inline
TreeNode::TreeNode(const TreeNode& t):
    value(t.value), count(t.count), left(t.left), right(t.right){}

