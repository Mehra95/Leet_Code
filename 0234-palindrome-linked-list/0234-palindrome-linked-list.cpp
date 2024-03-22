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
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        vector<int>temp2(temp);
        reverse(temp2.begin(),temp2.end());
        if(temp==temp2)
        return true;
        
        return false;
    }
};