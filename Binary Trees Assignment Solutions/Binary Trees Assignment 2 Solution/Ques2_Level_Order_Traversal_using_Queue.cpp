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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode *>nodeQueue;
        vector<vector<int>>answer;
        nodeQueue.push(root);
        while(!nodeQueue.empty()){
            int size = nodeQueue.size();
            vector<int>temp(size);
            for(int i=0;i<size;i++){
                auto node = nodeQueue.front();
                nodeQueue.pop();

                temp[i] = node->val;

                if(node->left)nodeQueue.push(node->left);
                if(node->right)nodeQueue.push(node->right);
            }
            answer.push_back(temp);
        }
        return answer;
    }
};