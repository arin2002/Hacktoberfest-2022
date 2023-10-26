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

// TC = O(n/2) + O(n/2) = O(n)
// SC = O(n/2) = O(n)

// bool isPalindrome(ListNode *head)
// {
//     stack<int> myStack;

//     ListNode *slow = head;
//     ListNode *fast = head;
//     ListNode *prev;

//     // traverse till mid of the list using slow and fast pointers and push the elements into stack
//     // myStack.push(slow->val);

//     while (fast && fast->next)
//     {
//         prev = slow;
//         myStack.push(prev->val);
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // after finding mid
//     // if fast == nullptr this implies that size of list is even
//     // and if fast != nullptr => size of list is odd

//     // for odd list we need to crement slow by 1 but not in case of even list
//     if (fast != nullptr)
//     {
//         slow = slow->next;
//     }
//     // start traversing from next half mid and compare stack top value
//     while (slow != nullptr && !myStack.empty())
//     {
//         //  if at any point values are not equal this implies that list is not pallindrome
//         if (slow->val != myStack.top())
//             return false;
//         myStack.pop();
//         slow = slow->next;
//     }
//     if (!myStack.empty())
//         return false;

//     return true;
// }

ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *prev = NULL;
    ListNode *current = head;
    ListNode *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head; // or simply return prev
}

// optimised
// TC = O(n/2) + O(n/2) + O(n/2) + O(n/2) = O(n)
// SC = O(1)
bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev;

    // traverse till mid of the list using slow and fast pointers and push the elements into stack

    while (fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // after finding mid
    // if fast == nullptr this implies that size of list is even
    // and if fast != nullptr => size of list is odd

    // for odd list we need to crement slow by 1 but not in case of even list
    if (fast != nullptr)
    {
        slow = slow->next;
    }
    // reverse the next half
    slow = reverseList(slow);
    ListNode* p = slow;
    ListNode* ptr = head;

    while (slow && ptr && ptr != prev->next)
    {
        if(ptr->val != slow->val)
            return false;

        ptr = ptr->next;
        slow = slow->next;
    }
    // again reversing the list so as to retain the give list
    reverseList(p);

    return true;
}

void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *n1 = new ListNode(2);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(2);
    ListNode *n4 = new ListNode(1);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    printList(head);
    cout << endl
         << isPalindrome(head);
    cout<<"\n--------------After------------------\n";
    printList(head);
    
    return 0;
}