//
// Created by MADAN RAJ on 19-07-2026.
//

#ifndef MINDEPTH_H
#define MINDEPTH_H

int minDepth(TreeNode* root) {
    if (root == nullptr) return 0;

    if (root->left != nullptr && root->right == nullptr) return 1 + minDepth(root->left);
    else if (root->right != nullptr && root->left == nullptr) return 1 + minDepth(root->right);
    else return 1 + min(minDepth(root->left), minDepth(root->right));
}


#endif //MINDEPTH_H
