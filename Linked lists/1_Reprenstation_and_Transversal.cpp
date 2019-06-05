// Introduction to linked list, Their Reprentation and Transversal through a linked list

#include<bits/stdc++.h>
using namespace std;


// class to reprent elements of linked list
class Node{
    public:
        int data;
        Node *next;  

};

// Print Functon
void print_ll(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
};


int main(){
    //Declaration of three elements
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    //adding data to these elements
    head->data = 1;
    first->data = 2;
    second->data = 3;

    //linking the lists
    head->next = first;
    first->next = second;
    second->next = NULL;

    //calling print function
    print_ll(head);
    cout<<endl;
}