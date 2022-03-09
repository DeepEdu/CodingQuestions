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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* Next = new ListNode(0,head); // Dummy 
        ListNode* curr = head; //looping on List
        ListNode* prev = Next;
        while(curr != nullptr)
        {
            if(curr->next != nullptr && curr->val == curr->next->val)
            {
                while(curr->next != nullptr && curr->next->val == curr->val)
                {
                    curr = curr->next;
                }
              //Skip all Duplicates
                prev->next = curr->next;
            }
          // else move further
            else
                prev = prev->next;
            curr = curr->next;
        }
        return Next->next;
    }
};
