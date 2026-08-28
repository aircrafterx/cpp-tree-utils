//
// Created by MADAN RAJ on 10-08-2026.
//

#ifndef PATHSUM3_H
#define PATHSUM3_H

void solve(TreeNode* root, int targetSum, int& count, int prefix, unordered_map<int, int>& freq) {
    if (root == nullptr) return;

    prefix += root->val;
    int ele = prefix - targetSum;
    if (freq[ele]) count += freq[ele];
    freq[prefix]++;

    solve(root->left, targetSum, count, prefix, freq);
    solve(root->right, targetSum, count, prefix, freq);

    freq[prefix]--;
}

int pathSum3(TreeNode* root, int targetSum) {
    if (root == nullptr) return 0;
    int count = 0;
    unordered_map<int, int> freq;
    freq[0] = 1;
    solve(root, targetSum, count, 0, freq);
    return count;
}

#endif //PATHSUM3_H
