//removing nth node from the end of the linked list
//first declare two pointers fast and slow and move fast pointer by n nodes
//then assign fast to head and slow to head
//now move fast pointer to k
//if fast is null then head=head->next
//then we start iterate slow pointer and fast pointer till fast->next is not null
//else move fast and slow pointer by one node till fast->next is not null
//then slow->next=slow->next->next means we are removing nth node from the end of the linked list 
//by changing the next pointer of the node before the nth node from the end of the linked list
//return head

#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
        Node* fast = head;
        Node* slow = head;
 
        for (int i = 0; i < K; i++) {
            fast = fast->next;
        }
 
        if (fast == NULL) { //if there is only one node in the linked list
              head = head->next;
            return head;
        }
 
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next; //slow will reach the node before the nth node from the end of the linked list
        }
        slow->next = slow->next->next; //we will pointing the next pointer of the node before the nth node from the end of the linked list to the node after the nth node from the end of the linked list
        return head;
}
//time complexity: O(n)
//space complexity: O(1)