//merge two sorted linked list
#include <bits/stdc++.h>
using namespace std;

 template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
//iterative approach
    Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){

    Node<int>* p1 = first, *p2 = second;
    Node<int>* dummy = new Node<int>(-1);
    Node<int>*p3=dummy;

    while(p1!=NULL and p2!=NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1=p1->next;
        }
        else{
            p3->next = p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;

}

//recursive approach

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* result;
    if(first==NULL)
    {
        return second;
    }
    if(second==NULL)
    {
        return first;
    }
    if(first->data<=second->data)
    {
        result=first;
        first->next=sortTwoLists(first->next,second);
    }
    else
    {
        result=second;
        second->next=sortTwoLists(first,second->next);
    }
    return result;
}


//time complexity: O(n+m)
//space complexity: O(1)