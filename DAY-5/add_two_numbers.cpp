//adding two numbers in linked list 

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* node = new ListNode();
        ListNode* temp = node;    //store the new node of the linked list in temp node
        while (l1 && l2)  //when two linked lists get finished add two numbers
        {
            int ans = l1->val + l2->val + carry;
            carry = ans/10;
            ans = ans%10;
            ListNode* newn = new ListNode(ans);
            temp->next = newn;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {    //when l2 is finished and l1 is not finished
            int ans = l1->val + carry;
            carry = ans/10;
            ans = ans%10;
            ListNode* newn = new ListNode(ans);
            temp->next = newn;
            temp = temp->next;
            l1 = l1->next;           
        }
        while (l2) {  //when l1 is finished and l2 is not finished
            int ans = l2->val + carry;
            carry = ans/10;
            ans = ans%10;
            ListNode* newn = new ListNode(ans);
            temp->next = newn;
            temp = temp->next;
            l2 = l2->next;          
        }
        if (carry){  //when there will be carry at the end
            ListNode* newn = new ListNode(carry);
            temp->next = newn;
            temp = temp->next;
        }
        return node->next; //return the next node of the node which we have created at the beginning as its defalut node value is zero
    }
};