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

void push(Node** head_ref,int new_data){
    /*
            Inserting new node in front
    */

    Node* new_node = new Node();
    
    new_node->data = new_data;
    new_node->next = *head_ref;

    *head_ref = new_node;
    
}

void insert_after(Node* prev_node,int new_data){
    /*
            Inserting new node in after prev_node
    */
    
    if(prev_node == NULL){
        return;
    }

    Node* new_node = new Node();

    
    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;



    
}


void append(Node** head_ref,int new_data){
    /*
            Inserting new node at last
    */

    if(*head_ref == NULL){
        return;
    }

    Node* new_node = new Node();

    Node* last = *head_ref;
    new_node->data = new_data; 
    new_node->next = NULL;

    while(last->next!=NULL){
        last = last->next;
    }
    
    last->next = new_node;
    return;
   
}

    

// Print Functon
void print_ll(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
};




int main(){
    //Declaration of three elements
    Node *head = NULL;

    push(&head,2);
    push(&head,1);

    append(&head,3);
    append(&head,4);

    insert_after(head->next,8);
    insert_after(head->next,7);





    print_ll(head);

    cout<<endl;
}