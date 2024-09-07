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
    int length(ListNode *head){
        int cnt = 0;

        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = length(head);

        if(len < k or !head)return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *curr = dummy,*prev = dummy , *nex = dummy;
        while(len >= k){
            curr = prev->next;
            nex = curr->next;

            for(int i=1;i<k;i++){
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }

            prev = curr;
            len -= k;
        }
        return dummy->next;
    }
};