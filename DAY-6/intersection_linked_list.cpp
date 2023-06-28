//finding intersection of linked list 

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {} //constructor
};


//using set

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>node;
        ListNode* temp = headA;
        while(temp!=NULL)
        {
            node.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL)
        {
            if(node.find(temp)!=node.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

//using two pointer approach

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=tempB)
        {
            if(tempA==NULL)
            {
                tempA=headB;
            }
            else
            {
                tempA=tempA->next;
            }
            if(tempB==NULL)
            {
                tempB=headA;
            }
            else
            {
                tempB=tempB->next;
            }
        }
        return tempA;
    }
};

//time complexity: O(m+n)
//space complexity: O(1)