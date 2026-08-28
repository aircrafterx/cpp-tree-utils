//
// Created by MADAN RAJ on 28-08-2026.
//

#ifndef LONGESTZIGZAGPATH_H
#define LONGESTZIGZAGPATH_H

int solve(TreeNode* root, bool isLeft, int& maxLength) {
    if (root == nullptr) return 0;

    int left = solve(root->left, false, maxLength);
    int right = solve(root->right, true, maxLength);

    if (isLeft) {
        maxLength = max(maxLength, left + 1);
        return left + 1;
    }

    maxLength = max(maxLength, right + 1);
    return right + 1;
}

int longestZigZagPath(TreeNode* root) {
    if (root == nullptr) return 0;
    int res = 0;
    solve(root->left, 1, res);
    solve(root->right, 0, res);
    return res;
}

#endif //LONGESTZIGZAGPATH_H
