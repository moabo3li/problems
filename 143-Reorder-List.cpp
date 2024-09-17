/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
     if (!head || !head->next || !head->next->next) return;

    ListNode* slow=head;
    ListNode* fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* cur=slow->next;
    ListNode* prev=nullptr;
    ListNode* next=nullptr;
    slow->next=nullptr;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    ListNode* first= head;
    cur=prev;
    while(cur){
        ListNode*tp1=first->next;
        ListNode*tp2=cur->next;
        first->next=cur;
        cur->next=tp1;
        first=tp1;
        cur=tp2;
    }

    }
};