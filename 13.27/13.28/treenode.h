#ifndef TREENODE_H
#define TREENODE_H
#include <string>
using std::string;
class TreeNode {
public:
    TreeNode(const string &s = "", int c = 0, TreeNode * const l = nullptr, TreeNode * const r = nullptr);
    TreeNode(const TreeNode& t);
    TreeNode& operator=(const TreeNode &rhs) = default;
private:
    string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};
#endif
