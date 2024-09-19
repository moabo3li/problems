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
        stack<ListNode*>st;
        ListNode* temp=head;
        ListNode* td;
        while(temp){
            st.push(temp);
            temp=temp->next;
        }
        for(int i=0;i<n-1;i++){
            st.pop();
        }
        td=st.top();
        temp=st.top()->next;
        st.pop();
        if(!st.empty()){
        st.top()->next=temp;
        delete td;
        return head;
        }
        else {
        delete td;
        return temp;
        }
    }
};