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
        ListNode dummy(0, head);
        ListNode* temp = head;

        int count = 0;
        while(temp!=nullptr){
            temp = temp->next;
            count++;
        }
        temp = &dummy;
        for (int i = 0; i < count - n; i++) {
            temp = temp->next;
        }
        
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return dummy.next;

        
    }
};