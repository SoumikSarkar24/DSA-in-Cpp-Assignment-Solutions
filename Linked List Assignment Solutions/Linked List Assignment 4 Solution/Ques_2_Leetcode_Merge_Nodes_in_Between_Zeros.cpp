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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        dummy->next = head;
        int sum = 0;
        head = head->next;
        while(head){
            if(head->val == 0){
                temp->next = new ListNode(sum);
                temp = temp->next;
                sum = 0;
            }
            else sum += head->val;
            head = head->next;
        }
        return dummy->next;
    }
};