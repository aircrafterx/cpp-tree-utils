//
// Created by MADAN RAJ on 05-08-2026.
//

#ifndef LEASTCOMMONANCESTORBST_H
#define LEASTCOMMONANCESTORBST_H

TreeNode* solve(TreeNode* root, int p, int q) {
    if (root == nullptr) return root;

    if (root->val > p && root->val > q) return solve(root->left, p, q);
    else if (root->val < p && root->val < q) return solve(root->right, p, q);

    return root;
}

int leastCommonAncestorBST(TreeNode* root, int p, int q) {
    if (root == nullptr) return -1;

    TreeNode* res = solve(root, p, q);
    return res->val;
}

#endif //LEASTCOMMONANCESTORBST_H
