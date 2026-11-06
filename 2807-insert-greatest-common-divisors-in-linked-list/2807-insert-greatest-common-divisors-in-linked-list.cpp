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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        
        while(temp != nullptr && temp->next != nullptr){
        ListNode* g = new ListNode(gcd(temp->val, temp->next->val));
            g->next = temp->next;
            temp->next = g;
            temp = temp->next->next;
            
        }
        return head;
        
    }
};