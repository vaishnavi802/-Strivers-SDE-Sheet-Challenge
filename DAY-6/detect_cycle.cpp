//detecting cycle in linked list 

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {} //constructor
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return false; //if there is no node or only one node then there will be no cycle
        ListNode* slow = head; //slow pointer
        ListNode* fast = head; //fast pointer
        while (fast != NULL && fast->next != NULL) //if fast pointer is null or fast pointer's next is null then there will be no cycle
        {
            slow = slow->next; //slow pointer will move one step
            fast = fast->next->next; //fast pointer will move two steps
            if (slow == fast) return true; //if slow and fast pointer meet then there is a cycle
        }
        return false; //if slow and fast pointer don't meet then there is no cycle
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)