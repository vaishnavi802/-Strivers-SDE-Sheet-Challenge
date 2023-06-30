//rotate linked list by k times 

//brute force approach

#include<bits/stdc++.h>
using namespace std;

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0) return head; //if there is no node or only one node or k=0 then return head
        ListNode* curr=head;
        int cnt=1;
        while(curr->next!=NULL)  //counting the number of nodes
        {
            cnt++;
            curr=curr->next;
        }
        curr->next=head;  //making the linked list circular means make last node point to head
        k=k%cnt;      //if k is greater than cnt then we will take modulo of k with cnt
        k=cnt-k;     //now we will find the node from where we have to break the linked list
        while(k--)   //traversing k nodes from head
        {
            curr=curr->next;
        }
        head=curr->next; //making head point to the next node of curr
        curr->next=NULL; //make the next of curr point to NULL for breaking the linked list
        return head;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

