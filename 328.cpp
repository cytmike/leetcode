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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* h1,*h2,*h;
        if (!head)
            return head;
        h1=head;
        if (!head->next)
            return head;
        h2=head->next;
        h=h2;
        while (h1 && h1->next)
        {
            h1->next=h1->next->next;
            if (h1->next)
                h1=h1->next;
            if (h2 && h2->next)
                h2->next=h2->next->next;
            if (h2->next)
                h2=h2->next;
        }
        h1->next=h;
        return head;
    }
};
