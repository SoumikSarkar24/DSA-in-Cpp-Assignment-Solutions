#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;

        node(int n){
            data = n;
            next = NULL;
        }
};

class Linkedlist{
    public:
        node *head,*tail;
        Linkedlist(){
            head = NULL;
            tail = NULL;
        }
        void display(){
            node *temp = head;
            while(temp){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        void AddFirst(int val){
            node *temp = new node(val);
            if(head==NULL) head = temp;
            else {
                temp->next = head;
                head = temp;
            }
            if(tail==NULL) tail = head;
        }

        void addLast(int val){
            node *temp = new node(val);

            if(tail == NULL)tail = temp;
            else{
                tail->next = temp;
                tail = temp;
            }
            if(head == NULL)head = tail;
        }
        
        void addAtIndex(int idx , int val){
            if(idx == 0)AddFirst(val);
            else{
                idx--;
                node *temp = head;
                while(idx--){
                    temp = temp->next;
                }
                cout<<"after idx iterations "<<temp->data<<endl;
                node *newnode = new node(val);
                cout<<newnode->data<<endl;
                newnode->next = temp->next;
                cout<<newnode->data<<endl;
                temp->next = newnode;
            }
        }

        void getAtIndex(int idx){
            if(idx==0)cout<<head->data;
            else{
                node *temp = head;
                while(idx--)temp = temp->next;
                cout<<temp->data<<endl;
            }
        }

        void deleteAtIndex(int idx){
            if(idx == 0)head = head->next;
            else{
                node *prev = NULL, *curr = head;
                while(idx--){
                    prev = curr;
                    curr = curr->next;
                }

                prev->next = curr->next;
                curr->next = NULL;
            }
        }
};
int main(){
    Linkedlist l1;
    l1.AddFirst(1);
    l1.AddFirst(2);
    l1.AddFirst(3);
    l1.AddFirst(4);
    // l1.display();
    l1.addLast(1);
    l1.addLast(2);
    l1.addLast(3);
    l1.addLast(4);
    l1.addAtIndex(3,8);
    l1.addAtIndex(8,10);
    l1.deleteAtIndex(9);
    l1.display();
    // l1.getAtIndex(9);
}