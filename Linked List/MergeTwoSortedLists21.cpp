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
      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ios_base::sync_with_stdio(false);
      cin.tie(0);cout.tie(0);
      
      if(list1==NULL)return list2;
      if(list2==NULL)return list1;
      
      ListNode* head = new ListNode(-1);
      ListNode* temp = head;
      while(list1 != nullptr && list2 != nullptr){
        if(list1 -> val <= list2 ->val){  
          temp->next = list1; 
          temp = list1;
          list1 = list1->next;
        }else {
          temp->next = list2;
          temp = list2;
          list2 = list2->next;
        }
      }
      if(list1)
        temp->next = list1;
      else if(list2)
        temp->next = list2;
      return head->next;
      }
  };