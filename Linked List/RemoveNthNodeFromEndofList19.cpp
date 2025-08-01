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
          // ListNode * temp=head;
          // int c=0;
          // while(temp!=NULL)
          // {temp=temp->next;
          // c++;
          // }
          // if(c==n){
          // head=head->next;
          // return head;
          // }                           ------------>brute force
          // int x=c-n-1;
          // temp=head;
          // while(x)
          // {   
          //  temp=temp->next;
          //     x--;
          // }
          // temp->next=temp->next->next;
          // return head;
  
          ListNode* fast=head;
          ListNode* slow=head;
          for(int i=0;i<n;i++)
              fast=fast->next;
          if(fast==NULL)
              return head->next;
          while(fast->next!=NULL)
          {   
              fast=fast->next;
              slow=slow->next;
          }
          ListNode* delnode=slow->next;
          slow->next=slow->next->next;
          delete(delnode);
          return head;
      }
  };


  //intution behind the second approach is ,first we make the fast pointer(not realy fast as we are only traversing it by incremeneting one step only), to n ,so the rest (len-n)is the pos from the start of the node that need to be removed ,hence now start from head a new slow pointer .we traverse slow and fast incrementing each one step untill tjhe fast pointer reaches the end . and now the slow pointer points a node prev than the node that needs to be removed  