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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* slow=head;
       ListNode* fast=head;
       if(!head||!head->next)return NULL;
       for(int i=0;i<n;i++){
        fast=fast->next;    
       } 
       ListNode* prev=NULL;
       while (fast){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
       }ListNode*temp;
       if(!prev){
        head=head->next;
        delete slow;
       }else{
        slow;
        prev->next=prev->next->next;
        delete slow;
       }
       return head;
       
       
    }
};