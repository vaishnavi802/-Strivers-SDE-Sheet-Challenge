//delete a given node in a linked list without head pointer

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

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    if(node==NULL) return;
    else {
      if (node->next == NULL)
      {
          return;
      }
      LinkedListNode<int> *temp=node->next;
      node->data=node->next->data;
      node->next=node->next->next;
      free (temp);

    }
}

//time complexity: O(1)
//space complexity: O(1)