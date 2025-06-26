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
private:
    int findLen(ListNode* head){
        int l=0;
        while(head!=nullptr){
            head=head->next;
            l++;
        }
        return l;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        //find len of LL
        int L=findLen(head);

        //find kth node from starting
        int k_start=k;
        ListNode* n1=head;
        while(k_start>1){
            n1=n1->next;
            k_start--;
        }

        //find kth node from end
        //k_end=L-k+1 from start
        int k_end=L-k+1;
        ListNode* n2=head;
        while(k_end>1){
            n2=n2->next;
            k_end--;
        }

        //swap val of n1 and n2
        swap(n1->val,n2->val);
        return head;
    }
};
