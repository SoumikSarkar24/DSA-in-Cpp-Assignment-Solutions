#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode *next;

        ListNode(int n){
            data = n;
            next = NULL;
        }
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    if(!head or !head->next)return NULL;
    ListNode *fast = head , *slow = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    } 

    ListNode *prev = NULL , *curr = head;

    while(curr != slow){
        prev = curr;
        curr = curr->next;
       }
    if(prev)prev->next = curr->next;

    return head;
    }
};
