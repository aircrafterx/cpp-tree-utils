//
// Created by MADAN RAJ on 09-07-2026.
//

#ifndef TREENODE_H
#define TREENODE_H

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v) {
        val = v;
        left = nullptr;
        right = nullptr;
    }
};

#endif //TREENODE_H
