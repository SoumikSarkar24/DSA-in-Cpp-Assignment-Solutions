//Product of all values in a binary tree
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
void findProduct(Node* root,long long int &product){
    if(!root) return;
    if(root->left) product*=root->left->data;
    if(root->right) product*=root->right->data;
    findProduct(root->left,product);
    findProduct(root->right,product);
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
    long long int product = root->data;
    findProduct(root,product);
    cout<<"Product is : "<<product<<endl;
}