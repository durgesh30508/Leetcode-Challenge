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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL)return head;
        ListNode *e1=head->next,*e2 = head->next,*o2 = head;
        //o1 = head,e1 = head->next,o2 = head,e2 = head->next;
        while(e2!=NULL and e2->next!=NULL){
            o2->next = e2->next;
            e2->next = e2->next->next;
            o2= o2->next;
            e2 = e2->next;
        }
        o2->next = e1;
        return head;
        
    }
};
