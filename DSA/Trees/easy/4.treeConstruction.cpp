#include <iostream>
#include <vector>
#include <unordered_map>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    // Hash map to find the index of a root value in the inorder array instantly
    std::unordered_map<int, int> inorderMap;
    int preorderIndex = 0;

    TreeNode* buildTreeHelper(const std::vector<int>& preorder, int inorderStart, int inorderEnd) {
        // Base Case: If the boundaries cross, this subtree is empty
        if (inorderStart > inorderEnd) {
            return nullptr;
        }

        // 1. The first element in the current preorder segment is the root
        int rootValue = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);

        // 2. Find where this root splits the inorder array
        int rootInorderIndex = inorderMap[rootValue];

        // 3. Recursively build the left and right subtrees
        // Crucial: Must build LEFT first because preorder naturally processes Left before Right
        root->left = buildTreeHelper(preorder, inorderStart, rootInorderIndex - 1);
        root->right = buildTreeHelper(preorder, rootInorderIndex + 1, inorderEnd);

        return root;
    }

public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        preorderIndex = 0;
        inorderMap.clear();
        
        // Populate the hash map for O(1) lookups
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }
        
        return buildTreeHelper(preorder, 0, inorder.size() - 1);
    }
};

int main(){
    
}