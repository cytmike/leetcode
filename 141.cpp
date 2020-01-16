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
    bool hasCycle(ListNode *head) {
        ListNode *a, *b;
        a=head;
        b=head;
        while (a)
        {
            a=a->next;
            if (a==b)
                return true;
            if (a)
                a=a->next;
            if (a==b)
                return true;
            b=b->next;
        }
        return false;
    }
};
