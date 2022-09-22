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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>v;
        ListNode* cur = head -> next;
        int num = 0;
        while(cur){
            if(cur -> val == 0){
                v.push_back(num);
                cur = cur -> next;
                num = 0;
            }
            else{
                num += cur -> val;
                cur = cur -> next;
            }
        }
        ListNode* ans = new ListNode(v[0]);
        ListNode* res = ans;
        for(int i = 1; i < v.size(); i++){
            ListNode* temp = new ListNode(v[i]);
            ans -> next = temp;
            ans = ans -> next;
        }
        return res;
    }
};