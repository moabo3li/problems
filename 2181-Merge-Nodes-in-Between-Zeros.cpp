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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*cur=head->next;
        ListNode*ans=head;
        int sum=0;
        while(cur)
        {
            if(cur->val==0)
        {
            ans->val=sum;
            if(cur->next==NULL)
            {ans->next=NULL;
            break;
            }
            ans->next=cur;
            ans=ans->next;
            sum=0;
        }
        else
        sum+=cur->val;
        cur=cur->next;
        }
              
                
    return head  ;
    }
};