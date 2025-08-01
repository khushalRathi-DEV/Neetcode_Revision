/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
      bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        
        if(head == nullptr || head->next == nullptr)
          return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr || fast->next->next != nullptr){
          slow = slow->next;
          fast = fast->next->next;
          if(slow == fast)
            return true;
        } 
      return false;
      }
  };