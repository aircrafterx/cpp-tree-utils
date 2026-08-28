//
// Created by MADAN RAJ on 15-07-2026.
//

#ifndef PATHSUM_H
#define PATHSUM_H

bool add(TreeNode* root, const int targetSum, int sum) {
    if (root == nullptr) return false;

    sum += root->val;
    if (root->left == nullptr && root->right == nullptr) return sum == targetSum;

    return add(root->left, targetSum, sum + root->val)|| add(root->right, targetSum, sum + root->val);
}

bool pathSum(TreeNode* root, int targetSum) {
    return add(root, targetSum, 0);
}

#endif //PATHSUM_H
