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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m, vector<int>(n, -1));
        int t = 0, b = m-1, l = 0, r = n-1;
        int temp = 0;
        while(t <= b and l <= r){
            if(temp == 0){
                for(int i = l; i <= r; i++){
                    v[t][i] = head->val;
                    if(!head->next){
                        return v;
                    }
                    head = head -> next;
                }
                t++;
            }
            else if(temp == 1){
                for(int i = t; i <= b; i++){
                    v[i][r] = head->val;
                    if(!head->next){
                        return v;
                    }
                    head = head->next;
                }
                r--;
            }
            else if(temp == 2){
                for(int i = r; i >= l; i--){
                    v[b][i] = head->val;
                    if(!head->next){
                        return v;
                    }
                    head = head->next;
                }
                b--;
            }
            else if(temp == 3){
                for(int i = b; i >= t; i--){
                    v[i][l] = head->val;
                    if(!head->next){
                        return v;
                    }
                    head = head->next;
                }
                l++;
            }
            temp = (temp+1)%4;
        }
        return v;
    }
};