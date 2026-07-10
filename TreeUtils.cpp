//
// Created by MADAN RAJ on 10-07-2026.
//
#include "TreeUtils.h"
#include <queue>

using namespace std;

TreeNode* buildTree(vector<int> nums) {
    int n = nums.size();
    if (n == 0 || nums[0] == NULL_NODE) return nullptr;

    TreeNode* root = new TreeNode(nums[0]);

    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < n) {
        TreeNode* parent = q.front();

        if (i < n && nums[i] != NULL_NODE) {
            TreeNode* left = new TreeNode(nums[i]);
            parent->left = left;
            q.push(left);
        }

        i++;

        if (i < n && nums[i] != NULL_NODE) {
            TreeNode* right = new TreeNode(nums[i]);
            parent->right = right;
            q.push(right);
        }

        i++;
        q.pop();
    }

    return root;
}

void preOrder(TreeNode* root, vector<int>& res) {
    if (root == nullptr) return;
    res.push_back(root->val);
    preOrder(root->left, res);
    preOrder(root->right, res);
}

vector<int> preOrderTraversal(TreeNode* root) {
    if (root == nullptr) return {};
    vector<int> res;

    preOrder(root, res);
    return res;
}

void inOrder(TreeNode* root, vector<int>& res) {
    if (root == nullptr) return;

    inOrder(root->left, res);
    res.push_back(root->val);
    inOrder(root->right, res);
}

vector<int> inOrderTraversal(TreeNode* root) {
    if (root == nullptr) return {};
    vector<int> res;

    inOrder(root, res);
    return res;
}

void postOrder(TreeNode* root, vector<int>& res) {
    if (root == nullptr) return;

    postOrder(root->left, res);
    postOrder(root->right, res);
    res.push_back(root->val);
}

vector<int> postOrderTraversal(TreeNode* root) {
    if (root == nullptr) return {};
    vector<int> res;

    postOrder(root, res);
    return res;
}

vector<int> levelOrderTraversal(TreeNode* root) {
    if (root == nullptr) return {};
    vector<int> res;
    queue<TreeNode*> q;

    q.push(root);

    while (!q.empty()) {
        TreeNode* parent = q.front();
        res.push_back(parent->val);

        if (parent->left != nullptr) q.push(parent->left);
        if (parent->right != nullptr) q.push(parent->right);

        q.pop();
    }

    return res;
}

void deleteTree(TreeNode* root) {
    if (root == nullptr) return;

    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}