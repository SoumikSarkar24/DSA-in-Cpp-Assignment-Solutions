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
    int index = 0;
    TreeNode *build(vector<int>&ino , vector<int>&post , int s , int e){
        if(s > e or index < 0)return NULL;

        TreeNode *root = new TreeNode(post[index]);
        index--;

        if(s == e)return root;

        int newIndex = 0;

        for(int i=s;i<=e;i++){
            if(ino[i] == root->val){
                newIndex = i;
                break;
            }
        }
        root->right = build(ino , post , newIndex + 1 , e);
        root->left = build(ino , post , s , newIndex - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size() - 1;
        index = n;

        return build(inorder , postorder , 0 , n);
    }
};