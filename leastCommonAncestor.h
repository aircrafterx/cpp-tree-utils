//
// Created by MADAN RAJ on 28-07-2026.
//

#ifndef LEASTCOMMONANCESTOR_H
#define LEASTCOMMONANCESTOR_H

TreeNode* solve(TreeNode* root, int p, int q) {
    if (root == nullptr) return root;

    TreeNode* left = solve(root->left, p, q);
    TreeNode* right = solve(root->right, p, q);

    if (left != nullptr && right != nullptr) return root;
    if (left == nullptr && right != nullptr) return right;
    if (right == nullptr && left != nullptr) return left;
    if (root->val == p || root->val == q) return root;

    return nullptr;
}

int LeastCommonAncestor(TreeNode* root, int p , int q) {
    TreeNode* res = solve(root, p, q);
    return res->val;
}

#endif //LEASTCOMMONANCESTOR_H
