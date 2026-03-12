/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        int cr = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(l1 != nullptr || l2 != nullptr || cr != 0){
            int v1 = (l1 != nullptr)? l1->val : 0;
            int v2 = (l2 != nullptr)? l2->val : 0;
            int s = v1 + v2 + cr;       
            cr = s / 10;
            s = s % 10;
            
            temp->next  = new ListNode(s);
            temp = temp->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return dummy->next;
    }
};