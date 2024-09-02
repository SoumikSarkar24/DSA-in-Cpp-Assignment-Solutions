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
    TreeNode *build(vector<int>&pre , vector<int>&post , int s , int e){
        if(s > e or index > pre.size()-1)return NULL;

        TreeNode *root = new TreeNode(pre[index]);
        index++;

        if(s == e)return root;

        int newIndex = 0;

        for(int i=s;i<=e;i++){
            if(post[i] == pre[index]){
                newIndex = i;
                break;
            }
        }
        root->left = build(pre , post , s , newIndex);
        root->right = build(pre , post , newIndex + 1 , e - 1); 
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return build(preorder , postorder , 0 , preorder.size() - 1);
    }
};