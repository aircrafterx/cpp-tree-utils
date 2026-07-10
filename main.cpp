//
// Created by MADAN RAJ on 08-07-2026.
//
#include <bits/stdc++.h>
#include "TreeUtils.h"

using namespace std;

int main() {
    TreeNode* root = buildTree({ 1, 2, 3, 4, 5, 6, 7});
    vector<int> res = levelOrderTraversal(root);

    for (int i : res) cout << i << " ";
    cout << endl;

    deleteTree(root);
    return 0;
}