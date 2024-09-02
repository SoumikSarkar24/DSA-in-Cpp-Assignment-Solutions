//Minimum value in a Binary Tree
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
void findMin(Node* root,int &mini){
    if(!root) return;
    if(root->left) mini =min(root->left->data,mini);
    if(root->right) mini = min(root->right->data,mini);
    findMin(root->left,mini);
    findMin(root->right,mini);
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(1);
    root->left->right = new Node(1);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(2);
    root->right->right = new Node(3);
    root->right->right->left = new Node(10);
    int mini = root->data;
    findMin(root,mini);
    cout<<"Minimum is : "<<mini<<endl;
}