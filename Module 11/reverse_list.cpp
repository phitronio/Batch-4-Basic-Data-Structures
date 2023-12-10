class Solution
{
public:
    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
            return head;
        reverse(head, head);
        return head;
    }
};