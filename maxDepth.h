//
// Created by MADAN RAJ on 11-07-2026.
//

#ifndef MAXDEPTH_H
#define MAXDEPTH_H

int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

#endif //MAXDEPTH_H
