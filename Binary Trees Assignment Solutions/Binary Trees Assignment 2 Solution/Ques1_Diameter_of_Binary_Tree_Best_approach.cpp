#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
class Solution {
public:
    int ans = 0;
    
    int diameter(TreeNode *root){
        if(!root)return 0;
        int leftAnswer = diameter(root->left);
        int rightAnswer = diameter(root->right);

        ans = max(ans,leftAnswer + rightAnswer + 1);
        return max(rightAnswer,leftAnswer) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return ans - 1;
    }
};
int main(){
    Solution a;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(3);
    root->right = new TreeNode(1);
    root->left->right = new TreeNode(1);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->right->left = new TreeNode(10);

    cout<<"Diameter of the binary tree is "<<a.diameterOfBinaryTree(root);
}
