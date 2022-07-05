#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    //ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val)
{
    while (head != NULL && head->val == val)
    {
        ListNode* temp = head;
        head = head -> next;
        delete temp;
    }

    ListNode* cur = head;
    while (cur != NULL && cur->next != NULL)
    {
        if (cur->next->val == val)
        {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
        }
        else
        {
            cur = cur->next;
        }
    }
    return head;
}

int main()
{
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

    head = removeElements(head, 6);
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}