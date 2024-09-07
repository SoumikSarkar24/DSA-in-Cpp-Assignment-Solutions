#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode *next;

        ListNode(int n){
            val = n;
            next = NULL;
        }
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *temp = dummy;

        while(head){
            if(head->next and head->val == head->next->val){
                while(head->next and head->val == head->next->val)
                    head = head->next;
                temp->next = head->next;
            }
            else temp = temp->next;

            head = head->next;
        }
        return dummy->next;
    }
};