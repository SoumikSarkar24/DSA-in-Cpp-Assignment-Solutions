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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        queue<TreeNode *>q1,q2;
        q1.push(root->left);
        q2.push(root->right);

        while(!q1.empty() and !q2.empty()){
            TreeNode *p = q1.front();
            q1.pop();

            TreeNode *q = q2.front();
            q2.pop();

            if(!p and !q) continue;
            if(!p or !q) return false;

            if(p->val != q->val) return false;

            if(p->val == q->val){
                q1.push(p->left);
                q1.push(p->right);

                q2.push(q->right);
                q2.push(q->left);
            }
        }
        return true;
    }
};