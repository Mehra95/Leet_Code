class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans; // Handle the case where root is NULL

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        int max = INT_MIN;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp == NULL) {
                ans.push_back(max);
                if (!q.empty()) q.push(NULL);
                max = INT_MIN;
            } else {
                if (temp->val > max)
                    max = temp->val;

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }

        return ans;
    }
};
