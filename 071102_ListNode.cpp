#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
    public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* temp;
        ListNode* cur = head;
        ListNode* pre = NULL;
        while(cur)
        {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};

int main()
{
    Solution *MySolution = new Solution();
    ListNode *head = NULL, *ptemp, *pnew;
    head = new ListNode();
    ptemp = head;

    for (int i = 0; i < 7; i++)
    {
        pnew = new ListNode;
        cin >> pnew->val;
        pnew->next = NULL;
        ptemp->next = pnew;
        ptemp = pnew;
    }

    //head = removeElements(head, 0);
    head = MySolution->reverseList(head);
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}
