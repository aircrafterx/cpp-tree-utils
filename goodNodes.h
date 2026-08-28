//
// Created by MADAN RAJ on 10-08-2026.
//

#ifndef GOODNODES_H
#define GOODNODES_H

void solve(TreeNode* root, int maximum, int& count) {
    if (root == nullptr) return;

    if (root->val >= maximum) count++;
    maximum = max(maximum, root->val);

    solve(root->left, maximum, count);
    solve(root->right, maximum, count);
}

int goodNodes(TreeNode* root) {
    int count = 0;
    solve(root, INT_MIN, count);
    return count;
}

#endif //GOODNODES_H
