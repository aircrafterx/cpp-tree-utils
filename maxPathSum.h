//
// Created by MADAN RAJ on 09-08-2026.
//

#ifndef MAXPATHSUM_H
#define MAXPATHSUM_H

int solve(TreeNode* root, int& maxSum){
    if(root == nullptr) return 0;

    int l = max(0, solve(root->left, maxSum));
    int r = max(0, solve(root->right, maxSum));

    maxSum = max(maxSum, root->val + l + r);
    return root->val + max(l, r);
}

int maxPathSum(TreeNode* root) {
    if(root == nullptr) return 0;

    int maxSum = INT_MIN;
    int res = solve(root, maxSum);

    return maxSum;
}

#endif //MAXPATHSUM_H
