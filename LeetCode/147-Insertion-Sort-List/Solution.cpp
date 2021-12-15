/** PROBLEM LINK :: https://leetcode.com/problems/insertion-sort-list/
*/


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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *first = head, *second = temp;
        while(first){
            if(first->next && first->next->val < first->val)
            {
                ListNode* temp1 = first->next;
                while(second->next && second->next->val < temp1->val)// FINDING POSITION
                {
                    second = second->next;
                }
                first->next = first->next->next;
                temp1->next = second->next;
                second->next = temp1;
                second = temp;
            }
            else
            {
                first=first->next;
            }
        }
        return temp->next;
    }
};
