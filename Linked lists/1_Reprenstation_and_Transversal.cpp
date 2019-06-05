// Introduction to linked list, Their Reprentation and Transversal through a linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;  

};

void print_ll(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
};

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    head->data = 1;
    first->data = 2;
    second->data = 3;

    head->next = first;
    first->next = second;
    second->next = NULL;

    print_ll(head);
    cout<<endl;
}