//
// Created by MADAN RAJ on 28-07-2026.
//

#ifndef MERGETWOTREE_H
#define MERGETWOTREE_H

TreeNode* solve(TreeNode* root1, TreeNode* root2) {
    if (root1 == nullptr && root2 == nullptr) return nullptr;

    if (root1 != nullptr && root2 != nullptr) root1->val = root1->val + root2->val;
    if (root1 != nullptr && root2 == nullptr) return root1;
    if (root1 == nullptr && root2 != nullptr) return root2;

    root1->left = solve(root1->left, root2->left);
    root1->right = solve(root1->right, root2->right);

    return root1;
}

TreeNode* mergeTwoTree(TreeNode* root1, TreeNode* root2) {
    if (root1 == nullptr) return root2;
    if (root2 == nullptr) return root1;

    solve(root1, root2);
    return root1;
}

#endif //MERGETWOTREE_H
