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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            k++;
        }
        temp = head;
        int del = k-n;
        if(del == 0){
            return head -> next;
        }
        while(del > 1){
            temp = temp -> next;
            del--;
        }
        temp -> next = temp -> next -> next;
        return head;
    }
};