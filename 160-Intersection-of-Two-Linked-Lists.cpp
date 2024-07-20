/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int h1=0,h2=0;
        ListNode *p1=headA;
        ListNode *p2=headB;
        while (p1)
        {
            h1++;
            p1=p1->next;
        }
         while (p2)
        {
            h2++;
            p2=p2->next;
        }
        int t=abs(h1-h2);
        if(h1>h2)
        {
            while (t)
            {
                headA=headA->next;
                t--;
            }
        }else
        {
            while (t)
            {
                headB=headB->next;
                t--;
            } 
        }
        while(headA||headB)
        {
            if(headA==headB)
            return headA;
            headA=headA->next;
            headB=headB->next;

        }
        return NULL;

    }
};