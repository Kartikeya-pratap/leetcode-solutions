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
        ListNode* temp = head->next;;
        ListNode* dummy = new ListNode(0);
        ListNode* cuur = dummy;
        int v = 0;
        while(temp!=nullptr){
            if(temp->val == 0){
                cuur->next = new ListNode(v);
                cuur = cuur->next;
                v = 0;
            }
            else{
                v+=temp->val;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};