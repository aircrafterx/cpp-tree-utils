//
// Created by MADAN RAJ on 31-07-2026.
//

#ifndef VALIDATEBST_H
#define VALIDATEBST_H

bool validate(TreeNode* root, int minAllowed, int maxAllowed) {
    if (root == nullptr) return true;
    if (root->val <= minAllowed || root->val >= maxAllowed) return false;

    return validate(root->left, minAllowed, root->val) && validate(root->right, root->val, maxAllowed);
}

bool validateBST(TreeNode* root) {
    if (root == nullptr) return true;
    return validate(root, INT_MIN, INT_MAX);
}

// valid but inefficient solution

// pair<int, int> validate(TreeNode* root, bool& flag) {
//     if (root == nullptr) return {INT_MAX, INT_MIN};
//
//     pair<int, int> left = validate(root->left, flag);
//     pair<int, int> right = validate(root->right, flag);
//
//     if (flag && (root->val < left.second || root->val > right.first)) flag = false;
//
//     return {
//         min(root->val, left.first),
//         max(root->val, right.second)
//     };
// }
//
// bool validateBST(TreeNode* root) {
//     bool flag = true;
//     validate(root, flag);
//
//     return flag;
// }

#endif //VALIDATEBST_H
