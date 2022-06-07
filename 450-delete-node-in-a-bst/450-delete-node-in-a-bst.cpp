/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* root)
    {
        while(root->left) root = root->left;
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val < key)
        {
            root->right = deleteNode(root->right,key);
        }
        else if(root->val > key)
        {
            root->left = deleteNode(root->left,key);
        }
        else
        {
            if(root->left == NULL)
            {
                TreeNode* curr = root->right;
                delete(root);
                return curr;
            }
            if(root->right == NULL)
            {
                TreeNode* curr = root->left;
                delete(root);
                return curr;
            }
            else
            {
                TreeNode* inorder_succ = solve(root->right);
                swap(root->val,inorder_succ->val);
                root->right = deleteNode(root->right,inorder_succ->val);
            }
        }
        return root;
    }
};