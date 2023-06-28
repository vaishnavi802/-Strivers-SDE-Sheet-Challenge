//checking given linked list is palindrome or not

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {} //constructor
};

//using stack we can check

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* a=head;
        stack<int>s;
        while(a != NULL){
                s.push(a->val);
                a = a->next;
        }
         while(head != NULL ){
              
             int i=s.top();
             s.pop();
             if(head -> val != i){
                return false;
            }
           head=head->next;
        }
  
return true;
        
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

//using two pointer we can check

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true; //if there is no node or only one node then it is palindrome
        ListNode* slow=head; //slow pointer
        ListNode* fast=head; //fast pointer
        while(fast!=NULL && fast->next!=NULL) //if fast pointer is null or fast pointer's next is null then there will be no cycle
        {
            slow=slow->next; //slow pointer will move one step
            fast=fast->next->next; //fast pointer will move two steps
        }
        if(fast!=NULL) slow=slow->next; //if fast pointer is not null then slow pointer will move one step
        ListNode* prev=NULL; //previous pointer
        ListNode* curr=slow; //current pointer
        ListNode* next=NULL; //next pointer
        while(curr!=NULL) //reversing the second half of the linked list
        {
            next=curr->next; //next pointer will point to the next node of current node
            curr->next=prev; //current node's next will point to the previous node
            prev=curr; //previous pointer will point to the current node
            curr=next; //current pointer will point to the next node
        }
        while(prev!=NULL) //checking the first half and second half of the linked list
        {
            if(head->val!=prev->val) return false; //if the values of the first half and second half of the linked list are not equal then it is not palindrome
            head=head->next; //head pointer will move one step
            prev=prev->next; //previous pointer will move one step
        }
        return true; //if the values of the first half and second half of the linked list are equal then it is palindrome
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)