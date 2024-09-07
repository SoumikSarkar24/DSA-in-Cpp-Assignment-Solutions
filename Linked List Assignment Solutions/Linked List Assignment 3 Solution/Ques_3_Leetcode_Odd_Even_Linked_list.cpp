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
    ListNode* oddEvenList(ListNode* head) {
        if(!head or !head->next)return head;
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *newhead = even;

        while(even and even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = newhead;
        return head;        
    }
};