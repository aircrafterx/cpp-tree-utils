//
// Created by MADAN RAJ on 03-08-2026.
//

#ifndef MINABSDIFFRENCE_H
#define MINABSDIFFRENCE_H

void solve(TreeNode* root, int& res, TreeNode*& prev) {
    if (root == nullptr) return;

    solve(root->left, res, prev);
    if (prev != nullptr) res = min(res,abs(root->val - prev->val));
    prev = root;
    solve(root->right, res, prev);
}

int minAbsDiffrence(TreeNode* root) {
    if (root == nullptr) return -1;

    TreeNode* prev = nullptr;
    int res = INT_MAX;
    solve(root, res, prev);
    return res;
}

#endif //MINABSDIFFRENCE_H
