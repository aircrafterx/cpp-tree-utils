//
// Created by MADAN RAJ on 10-08-2026.
//

#ifndef HOUSEROBBER3_H
#define HOUSEROBBER3_H

pair<int, int> solve(TreeNode* root) {
    if (root == nullptr) return {0, 0};

    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);

    int take = left.second + right.second + root->val;
    int skip = max(left.first, left.second) + max(right.first, right.second);

    return {take, skip};
}

int houseRobber3(TreeNode* root) {
    pair<int, int> res = solve(root);
    return max(res.first, res.second);
}


#endif //HOUSEROBBER3_H
