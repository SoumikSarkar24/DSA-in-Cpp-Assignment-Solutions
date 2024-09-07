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
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* smallhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return smallhead;
    }
    int getDecimalValue(ListNode* head) {
        head = reverse(head);
        int a = 1 , sum = 0;
        while(head){
            sum += a*(head->val);
            head = head->next;
            a*=2;
        }
        return sum;
    }
};