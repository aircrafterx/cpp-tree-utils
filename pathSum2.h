//
// Created by MADAN RAJ on 18-07-2026.
//

#ifndef PATHSUM2_H
#define PATHSUM2_H

void solve(TreeNode* root, const int& targetSum, int sum, vector<int>& curr, vector<vector<int>>& res) {
    if (root == nullptr) return;

    curr.push_back(root->val);
    sum += root->val;
    if (root->left) solve(root->left, targetSum, sum, curr, res);
    if (root->right) solve(root->right, targetSum, sum, curr, res);

    if (root->left == nullptr && root->right == nullptr && sum == targetSum) res.push_back(curr);
    curr.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, const int& targetSum) {
    vector<int> curr;
    vector<vector<int>> res;
    solve(root, targetSum, 0, curr, res);
    return res;
}

#endif //PATHSUM2_H
