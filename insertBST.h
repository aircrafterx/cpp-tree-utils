//
// Created by MADAN RAJ on 28-07-2026.
//

#ifndef INSERTBST_H
#define INSERTBST_H

TreeNode* insertBST(TreeNode* root, int value) {
    if (root == nullptr) {
        TreeNode* newNode = new TreeNode(value);
        return newNode;
    }

    if (root->val < value) root->right = insertBST(root->right, value);
    if (root->val > value) root->left = insertBST(root->left, value);

    return root;
}

#endif //INSERTBST_H
