class Solution {
public:
    void recurDFS(TreeNode* root, bitset<9>& nodePathValParity, int& nPseudoPallindromePaths) {
        if(root == nullptr)
            return;

        nodePathValParity.flip(root->val-1);

        recurDFS(root->left, nodePathValParity, nPseudoPallindromePaths); 
        recurDFS(root->right, nodePathValParity, nPseudoPallindromePaths);
        if(!root->left && !root->right && nodePathValParity.count() <= 1)
                nPseudoPallindromePaths++;
        nodePathValParity.flip(root->val-1);
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        bitset<9> nodePathValParity;
        int nPseudoPallindromePaths = 0;
        recurDFS(root, nodePathValParity, nPseudoPallindromePaths);
        return nPseudoPallindromePaths;
    }
};
