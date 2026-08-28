//
// Created by MADAN RAJ on 09-08-2026.
//

#ifndef BUILDTREEWITHPOSTANDIN_H
#define BUILDTREEWITHPOSTANDIN_H

TreeNode* build(const vector<int>& postorder, const vector<int>& inorder, const unordered_map<int, int>& freq, int& ind, int left, int right) {
    if (left >= right) return nullptr;

    TreeNode* root = new TreeNode(postorder[ind]);
    int idx = freq.at(root->val);

    ind--;

    root->right = build(postorder, inorder, freq, ind, idx + 1, right);
    root->left = build(postorder, inorder, freq, ind, left, idx);

    return root;
}

TreeNode* buildTreeWithPostAndIn(vector<int>& postorder, vector<int>& inorder) {
    if (postorder.empty() && inorder.empty()) return nullptr;

    int ind = postorder.size() - 1;
    unordered_map<int, int> freq;
    for (int i = 0; i < inorder.size(); i++) freq[inorder[i]] = i;

    return build(postorder, inorder, freq, ind, 0, inorder.size());
}

#endif //BUILDTREEWITHPOSTANDIN_H
