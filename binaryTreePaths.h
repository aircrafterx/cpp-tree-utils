//
// Created by MADAN RAJ on 19-07-2026.
//

#ifndef BINARYTREEPATHS_H
#define BINARYTREEPATHS_H

void solve(TreeNode* root, vector<int>& curr, vector<vector<int>>& res) {
    if (root == nullptr) return;

    curr.push_back(root->val);

    if (root->left) solve(root->left, curr, res);
    if (root->right) solve(root->right, curr, res);

    if (root->left == nullptr && root->right == nullptr) res.push_back(curr);

    curr.pop_back();
}

vector<vector<int>> binaryTreePaths(TreeNode* root) {
    vector<int> curr;
    vector<vector<int>> res;
    solve(root, curr, res);

    return res;
}

#endif //BINARYTREEPATHS_H
