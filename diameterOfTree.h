//
// Created by MADAN RAJ on 12-07-2026.
//

#ifndef DIAMETEROFTREE_H
#define DIAMETEROFTREE_H

int height(TreeNode* root, int& candidateDiameter) {
    if (root == nullptr) return 0;
    int left = height(root->left, candidateDiameter);
    int right = height(root->right, candidateDiameter);

    candidateDiameter = max(candidateDiameter, left + right);

    return 1 + max(left, right);
}

int diameterOfTree(TreeNode* root) {
    int d = 0;
    height(root, d);
    return d;
}

#endif //DIAMETEROFTREE_H
