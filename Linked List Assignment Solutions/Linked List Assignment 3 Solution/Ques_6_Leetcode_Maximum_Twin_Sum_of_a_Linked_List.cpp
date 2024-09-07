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
    int pairSum(ListNode* head) {
        ListNode *fast = head , *slow = head;

        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow = reverse(slow);

        ListNode *temp = slow;

        int maxi = 0;

        while(head and temp){
            maxi = max(maxi , temp->val + head->val);
            head = head->next;
            temp = temp->next;
        }
        return maxi;
    }
};