# 🌳 Tree Utilities in C++

A reusable utility library for practicing Binary Tree problems in C++.

## Features

- Build Binary Tree from Level Order input
- Preorder Traversal (DFS)
- Inorder Traversal (DFS)
- Postorder Traversal (DFS)
- Level Order Traversal (BFS)
- Recursive Tree Deletion

## Project Structure

```
TreeUtils/
├── TreeNode.h
├── TreeUtils.h
├── TreeUtils.cpp
├── main.cpp
└── CMakeLists.txt
```

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

---

Built while mastering Binary Trees and Graph traversal fundamentals.