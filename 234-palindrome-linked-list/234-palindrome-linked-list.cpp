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
    bool check(vector<int> ans)
    {
        int i = 0;
        int j = ans.size()-1;
        while(i < j)
        {
            if(ans[i] != ans[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        while(head)
        {
            ans.push_back(head->val);
            head = head->next;
        }
        return check(ans);
    }
};