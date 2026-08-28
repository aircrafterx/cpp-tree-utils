//
// Created by MADAN RAJ on 24-07-2026.
//

#ifndef ISSUBTREEOFANOTHER_H
#define ISSUBTREEOFANOTHER_H

bool solve(TreeNode* root, TreeNode* subRoot) {
    if (root == nullptr && subRoot == nullptr) return true;

    if (root == nullptr || subRoot == nullptr || root->val != subRoot->val) return false;
    return solve(root->left, subRoot->left) && solve(root->right, subRoot->right);
}

bool isSubtreeOfAnother(TreeNode* root, TreeNode* subRoot) {
    if (root == nullptr && subRoot == nullptr) return true;
    if (subRoot == nullptr) return true;
    if (root == nullptr) return false;
    return solve(root, subRoot) || isSubtreeOfAnother(root->left, subRoot) || isSubtreeOfAnother(root->right, subRoot);
}

#endif //ISSUBTREEOFANOTHER_H
