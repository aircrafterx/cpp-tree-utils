//
// Created by MADAN RAJ on 04-08-2026.
//

#ifndef KTHSMALLESTELEMENT_H
#define KTHSMALLESTELEMENT_H

int kthSmallestElement(TreeNode* root, int& k) {
    if (root == nullptr) return -1;

    int left = kthSmallestElement(root->left, k);
    if (left != -1) return left;

    k--;
    if (k == 0) return root->val;

    int right = kthSmallestElement(root->right, k);
    return right;
}

#endif //KTHSMALLESTELEMENT_H
