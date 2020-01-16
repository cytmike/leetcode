# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        a=head
        b=head
        while (a!=None):
            a=a.next;
            if (a==b):
                return True;
            if (a!=None):
                a=a.next;
            if (a==b):
                return True;
            b=b.next;
        return False;
