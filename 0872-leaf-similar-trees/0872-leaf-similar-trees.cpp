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
private:
void inorder(vector<int>&leaf1,TreeNode* root){
    
    if(root->left==NULL &&root->right==NULL)
    leaf1.push_back(root->val);

    if(root->left)
    inorder(leaf1,root->left);
    if(root->right)
    inorder(leaf1,root->right);
}
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1,leaf2;
        inorder(leaf1,root1);
        inorder(leaf2,root2);

        return leaf1==leaf2;
    }
};