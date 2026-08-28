//
// Created by MADAN RAJ on 22-07-2026.
//

#ifndef ISSAME_H
#define ISSAME_H

bool isSame(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;

    if (p == nullptr || q == nullptr || p->val != q->val) return false;
    return isSame(p->left, q->left) && isSame(p->right, q->right);
}

#endif //ISSAME_H
