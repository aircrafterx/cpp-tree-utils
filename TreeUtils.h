//
// Created by MADAN RAJ on 10-07-2026.
//

#ifndef TREEUTILS_H
#define TREEUTILS_H

#include <vector>
#include <climits>
#include "TreeNode.h"

using namespace std;

const int NULL_NODE = INT_MIN;

TreeNode* buildTree(vector<int> nums);

vector<int> preOrderTraversal(TreeNode* root);
vector<int> inOrderTraversal(TreeNode* root);
vector<int> postOrderTraversal(TreeNode* root);

vector<int> levelOrderTraversal(TreeNode* root);

void deleteTree(TreeNode* root);

#endif //TREEUTILS_H
