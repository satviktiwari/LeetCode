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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp -> next;
        }
        ListNode* ans = new ListNode(0);
        ListNode* res = ans;
        for(int i = 0; i < v.size(); i+= 2){
            ListNode* temp = new ListNode(v[i]);
            ans -> next = temp;
            ans = temp;
        }
        for(int i = 1; i < v.size(); i+= 2){
            ListNode* temp = new ListNode(v[i]);
            ans -> next = temp;
            ans = temp;
        }
        return res -> next;
    }
};