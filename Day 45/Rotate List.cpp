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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr){
            return head;
        }
        int length=1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        int rotations = k % length;
        if (rotations == 0) return head;

        ListNode* current = head;
        for (int i=0; i<length-rotations-1; i++) {
            current = current->next;
        }

        ListNode* newHead = current->next;
        current->next = nullptr;
        temp->next = head;

        return newHead;     
    }
};
