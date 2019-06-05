/*  Insertion of a new node in linked list
                                    1) At the front of the linked list
                                    2) After a given node.
                                    3) At the end of the linked list.
*/


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
    first->data = 3;
    second->data = 4;

    //linking the lists
    head->next = first;
    first->next = second;
    second->next = NULL;


    //insertion at Front of linked list
    Node* new_node_begin = new Node();
    new_node_begin->data = 0;
    new_node_begin->next = head;

    //insertion in bewtween node head and first
    Node* new_node_middle = new Node();
    new_node_middle->data = 2;
    new_node_middle->next = first;

    head->next = new_node_middle;

    
    //insertion at End of linked list after node Third
    Node* new_node_end = new Node();
    new_node_end->data = 5;

    second->next = new_node_end;

    


    

    //calling print function
    print_ll(new_node_begin);
    cout<<endl;
}