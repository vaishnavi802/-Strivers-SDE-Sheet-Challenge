//finding index of starting index of cycle in linked list

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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*>node;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            node.insert(temp);
            temp=temp->next;
            while(node.find(temp)!=node.end()){
                return temp;
            }
        }
        return NULL;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

//using two pointer approach

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return NULL; //if there is no node or only one node then there will be no cycle
        ListNode* slow = head; //slow pointer
        ListNode* fast = head; //fast pointer
        while (fast != NULL && fast->next != NULL) //if fast pointer is null or fast pointer's next is null then there will be no cycle
        {
            slow = slow->next; //slow pointer will move one step
            fast = fast->next->next; //fast pointer will move two steps
            if (slow == fast) break; //if slow and fast pointer meet then there is a cycle
        }
        if (slow != fast) return NULL; //if slow and fast pointer don't meet then there is no cycle
        slow = head; //slow pointer will start from the beginning
        while (slow != fast) //when slow and fast pointer meet then that is the starting point of the cycle
        {
            slow = slow->next; //slow pointer will move one step
            fast = fast->next; //fast pointer will move one step
        }
        return slow; //return the starting point of the cycle
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)