//reverse nodes of linked list by k nodes

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
#include<bits/stdc++.h>

class Solution {
public:
     ListNode* reverse(ListNode* head, int k,int length)
     {
        if(length<k)
        {
            return head;
        }
         int cnt=0;
         ListNode* a=head;
         ListNode* b=NULL;
         ListNode* c=NULL;
         while(cnt<k && a!=NULL)
         {
             b=a->next;
             a->next=c;
             c=a;
             a=b;
             cnt++;
         }
         if(b!=NULL)
         {
             head->next=reverse(b,k,length-k);
         }
         return c;
     }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        return reverse(head,k,length);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n/k)