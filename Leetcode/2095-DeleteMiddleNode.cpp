#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // Using slow and fast pointers
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }

        ListNode *slow = head;
        // this will cause slow to point to predecessor of middle node so that we can link predecessor to middle->next
        ListNode *fast = head->next->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *toDelete = slow->next;
        slow->next = slow->next->next;

        delete toDelete;
        return head;
    }
};

int main()
{

    return 0;
}