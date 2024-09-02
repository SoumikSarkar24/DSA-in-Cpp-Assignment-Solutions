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
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void helper(TreeNode* root,int &maxDia){
        if(root==NULL) return;
        int dia = levels(root->left) + levels(root->right);
        maxDia = max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;//reinitialise
        helper(root,maxDia);
        return maxDia;
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