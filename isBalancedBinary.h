//
// Created by MADAN RAJ on 13-07-2026.
//

#ifndef ISBALANCEDBINARY_H
#define ISBALANCEDBINARY_H

int height(TreeNode* root, bool& flag) {
    if (root == nullptr) return 0;

    int left = height(root->left, flag);
    int right = height(root->right, flag);


    if (flag && abs(left - right) > 1) flag = false;

    return 1 + max(left, right);
}

bool isBalancedBinary(TreeNode* root) {
    bool flag = true;
    height(root, flag);
    return flag;
}

#endif //ISBALANCEDBINARY_H
