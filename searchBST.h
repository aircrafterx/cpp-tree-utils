//
// Created by MADAN RAJ on 28-07-2026.
//

#ifndef SEARCHBST_H
#define SEARCHBST_H

TreeNode* searchBST(TreeNode* root, int target) {
    if (root == nullptr) return root;

    if (root->val < target) return searchBST(root->right, target);
    if (root->val > target) return searchBST(root->left, target);
    if (root->val == target) return root;

    return root;
}

#endif //SEARCHBST_H
