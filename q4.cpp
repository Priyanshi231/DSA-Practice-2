/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode *rev(ListNode *head){
        ListNode *curr = head;
        ListNode *p = NULL;
        while(curr!=NULL){
            ListNode *n = curr->next;
            curr->next = p;
            p = curr;
            curr = n;
        }
        return p;
    }
    ListNode *addOne(ListNode *head) {
        head = rev(head);

        ListNode *temp = head;
        int cr = 1;

        while(temp!=NULL){
            int sum = temp->val + cr;
            temp->val = sum % 10;
            cr = sum/10;

            if(cr == 0) break;

            if(temp->next == NULL && cr != 0){
                temp->next = new ListNode(cr);
                cr = 0;
                break;
            }
            temp = temp->next;

        }
        head = rev(head);
        return head;
    }
};