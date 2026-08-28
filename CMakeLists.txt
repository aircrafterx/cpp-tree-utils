cmake_minimum_required(VERSION 3.16)

project(TreeUtils)

set(CMAKE_CXX_STANDARD 17)

add_executable(TreeUtils
        main.cpp
        TreeUtils.cpp
        maxDepth.h
        diameterOfTree.h
        isBalancedBinary.h
        pathSum.h
        pathSum2.h
        minDepth.h
        binaryTreePaths.h
        sumRootToLeaf.h
        isSame.h
        isSymmetry.h
        isSubtreeOfAnother.h
        invertTree.h
        mergeTwoTree.h
        LeastCommonAncestor.h
        searchBST.h
        insertBST.h
        validateBST.h
        minAbsDiffrence.h
        kthSmallestElement.h
        leastCommonAncestorBST.h
        buildTreeWithPreAndIn.h
        buildTreeWithPostAndIn.h
        maxPathSum.h
        pathSum3.h
        goodNodes.h
        houseRobber3.h
        longestZigZagPath.h
)