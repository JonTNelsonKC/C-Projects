/*
    Name: class example
    Date: 9/15/20
    Desc: using struct to create nodes and link them for a linked list
*/
#include <iostream>

using namespace std;

struct node_t{
    int data;
    node_t* next;
};

int main(){
    // create the first node and put a 1 in it and have it pointing to nothing
    node_t* head = new node_t;
    head->data = 1;
    head->next = NULL;

    // create another node with a 2 in it and put it at the after the header
    head->next = new node_t;
    head->next->data = 2;
    head->next->next = NULL;


    // create another node called temp and put a 0 in it and have 
    // it point to the header
    // and then make it the header. 
    
    node_t* temp = new node_t;
    temp->data = 0;
    temp->next = head;

    head = temp;

/*    //print the list
     while(head->next){
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data;
    cout << endl;

    **************
    **************
    this print list doesn't work because when it is done we have lost
    the pointer to the head of the list
*/


    //correct print the list
    temp = head;
    while(temp->next){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
    cout << endl;


    // Delete the list and Return the memory from it
    temp = head;
    while(head->next){
    	head = head->next;
    	delete temp;
	temp = head;
    }
    delete head;
    head = NULL;

}
