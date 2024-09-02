#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode * left, * right;
    TreeNode(int key){
        val = key;
        left = right = NULL;
    }
};
class Solution {
public:
    bool doesExists(TreeNode *root , int target){
        if(!root)return false;

        if(!root->left and !root->right){
            return (target == root->val);
        }

        bool leftAnswer = doesExists(root->left , target - root->val);
        bool rightAnswer = doesExists(root->right , target - root->val);

        return (leftAnswer || rightAnswer);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return doesExists(root , targetSum);
    }
};
int main(){
    Solution a;
    TreeNode * root = new TreeNode(20);
    root ->left = new TreeNode(8);
    root->right = new TreeNode(22);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(25);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);
    int target;
    cout<<"Enter a target value";
    cin>>target;
    cout<<a.hasPathSum(root,target);
}