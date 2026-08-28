# 🌳 Tree Utilities in C++
A reusable utility library for practicing Binary Tree problems in C++.

## Features
- Build Binary Tree from Level Order input
- Preorder Traversal (DFS)
- Inorder Traversal (DFS)
- Postorder Traversal (DFS)
- Level Order Traversal (BFS)
- Recursive Tree Deletion
- 29 solved LeetCode-style problems, organized by category

## Project Structure

TreeUtils/
├── TreeNode.h
├── TreeUtils.h
├── TreeUtils.cpp
├── main.cpp
├── CMakeLists.txt
└── problems/
├── DFSFundamentals.h / .cpp
├── RootToLeafState.h / .cpp
├── TreeComparison.h / .cpp
├── Transformation.h / .cpp
├── LCA.h / .cpp
├── BST.h / .cpp
├── Construction.h / .cpp
└── AdvancedDFS.h / .cpp


## Example
```cpp
TreeNode* root = buildTree({1,2,3,4,5,6,7});
auto preorder = preOrderTraversal(root);
auto inorder = inOrderTraversal(root);
auto postorder = postOrderTraversal(root);
auto level = levelOrderTraversal(root);
deleteTree(root);
```

## Time Complexity
| Function | Complexity |
|----------|------------|
| buildTree | O(n) |
| Preorder | O(n) |
| Inorder | O(n) |
| Postorder | O(n) |
| Level Order | O(n) |
| deleteTree | O(n) |

## Problems Solved — 29/29

### Utilities
- ✅ Build Tree
- ✅ Preorder / Inorder / Postorder Traversal
- ✅ Level Order Traversal
- ✅ Delete Tree

### DFS Fundamentals
- ✅ Maximum Depth (104)
- ✅ Minimum Depth (111)
- ✅ Diameter of Binary Tree (543)
- ✅ Balanced Binary Tree (110)

### Root-to-Leaf State
- ✅ Path Sum I (112)
- ✅ Path Sum II (113)
- ✅ Binary Tree Paths (257)
- ✅ Sum Root to Leaf Numbers (129)

### Tree Comparison
- ✅ Same Tree (100)
- ✅ Symmetric Tree (101)
- ✅ Subtree of Another Tree (572)

### Transformation
- ✅ Invert Binary Tree (226)
- ✅ Merge Two Binary Trees (617)

### LCA
- ✅ Lowest Common Ancestor of Binary Tree (236)

### BST
- ✅ Search in a BST (700)
- ✅ Insert into a BST (701)
- ✅ Validate BST (98)
- ✅ Minimum Absolute Difference in BST (530)
- ✅ Kth Smallest Element in a BST (230)
- ✅ Lowest Common Ancestor of a BST (235)

### Construction
- ✅ Construct from Preorder + Inorder (105)
- ✅ Construct from Inorder + Postorder (106)

### Advanced DFS
- ✅ Binary Tree Maximum Path Sum (124)
- ✅ Path Sum III (437)
- ✅ Count Good Nodes in Binary Tree (1448)
- ✅ House Robber III (337)
- ✅ Longest ZigZag Path in a Binary Tree (1372)

---
Built while mastering Binary Trees and Graph traversal fundamentals.