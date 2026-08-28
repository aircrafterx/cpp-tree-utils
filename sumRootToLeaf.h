//
// Created by MADAN RAJ on 20-07-2026.
//

#ifndef SUMROOTTOLEAF_H
#define SUMROOTTOLEAF_H

void solve(TreeNode* root, int num, int& sum) {
    if (root == nullptr) return;

    num = (num * 10) + root->val;

    if (root->left) solve(root->left, num, sum);
    if (root->right) solve(root->right, num, sum);

    if (root->left == nullptr && root->right == nullptr) sum += num;
}

int sumRootToLeaf(TreeNode* root) {
    int sum = 0;
    solve(root, 0, sum);

    return sum;
}

#endif //SUMROOTTOLEAF_H
