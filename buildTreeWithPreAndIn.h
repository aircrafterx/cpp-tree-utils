//
// Created by MADAN RAJ on 09-08-2026.
//

#ifndef BUILDTREEWITHPREANDIN_H
#define BUILDTREEWITHPREANDIN_H

TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, const unordered_map<int, int>& freq, int& ind, int left, int right) {
    if (left >= right) return nullptr;

    TreeNode* root = new TreeNode(preorder[ind]);
    int inorderInd = freq.at(preorder[ind]);

    ind++;

    root->left = build(preorder, inorder, freq, ind, left, inorderInd);
    root->right = build(preorder, inorder, freq, ind, inorderInd + 1, right);

    return root;
}

TreeNode* buildTreeWithPreAndIn(vector<int> preorder, vector<int> inorder) {
    if (preorder.empty() && inorder.empty()) return nullptr;

    unordered_map<int, int> freq;
    for (int i = 0; i < inorder.size(); i++) {
        freq[inorder[i]] = i;
    }

    int ind = 0;

    return build(preorder, inorder, freq, ind, 0, inorder.size());
}

#endif //BUILDTREEWITHPREANDIN_H
