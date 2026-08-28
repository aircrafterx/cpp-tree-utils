//
// Created by MADAN RAJ on 23-07-2026.
//

#ifndef ISSYMMETRY_H
#define ISSYMMETRY_H

bool solve(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;

    if (p == nullptr || q == nullptr || p->val != q->val) return false;
    return solve(p->left, q->right) && solve(p->right, q->left);
}

bool isSymmetry(TreeNode* root) {
    if (root == nullptr) return true;
    return solve(root->left, root->right);
}

#endif //ISSYMMETRY_H
