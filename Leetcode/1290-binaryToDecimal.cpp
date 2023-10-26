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

// TC = O(n) + O(n)
// SC = O(n)
// int getDecimalValue(ListNode *head)
// {
//     int num = 0;
//     stack<int> st;
//     while (head != NULL)
//     {
//         st.push(head->val);
//         head = head->next;
//     }
//     int power = 0;
//     while (!st.empty())
//     {
//         num += st.top() * pow(2, power++);
//         st.pop();
//     }
//     return num;
// }

// optiimised approach
// TC = O(n)
// SC = O(1)
/*

in decimal if we are given string "123" then it can be converted to int by following operation
Loop	Character	Operation	     Result
1	    ‘           1’	        1	                        1
2	    ‘           2’	        (1x10) + 2	        12
3	    ‘           3’	        (12*10) + 3	        123


We apply same logic for binary to decimal conversion
*/ 

int getDecimalValue(ListNode *head)
{
    int num = 0;
    while (head != NULL)
    {
        num = num * 2 + head->val;
        head = head->next;
    }
    return num;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    cout << endl
         << getDecimalValue(head);
    return 0;
}