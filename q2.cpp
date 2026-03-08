/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
}; 
*/

class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
            //your code goes here

        if(head == NULL || head->next == NULL)
            return head;

            ListNode* zero = new ListNode(-1);
            ListNode* one = new ListNode(-1);
            ListNode* two = new ListNode(-1);

            ListNode* temp1 = zero;
            ListNode* temp2 = one;
            ListNode* temp3 = two;
            ListNode* curr = head;

            while(curr != nullptr){
                if(curr->data == 0){
                    temp1->next = curr;
                    temp1 = temp1->next;
                }
                else if(curr->data == 1){
                    temp2->next = curr;
                    temp2 = temp2->next;
                }
                else{
                    temp3->next = curr;
                    temp3 = temp3->next;
                }
                curr = curr->next;
            }
            temp1->next = (one->next != nullptr) ? one->next : two->next;
            temp2->next = two->next;
            temp3->next = nullptr;

            head = zero->next;
            return head;          
        }
};