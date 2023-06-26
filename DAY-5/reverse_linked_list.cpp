//reversing a linked list
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int>*a=head;
    LinkedListNode<int>*b=NULL;
    LinkedListNode<int>*c=NULL;
    while(a!=NULL)
    {
        b=a->next;
        a->next=c;
        c=a;
        a=b;
       
    }
    head=c;
    return c;
}

//time complexity: O(n)
//space complexity: O(1)