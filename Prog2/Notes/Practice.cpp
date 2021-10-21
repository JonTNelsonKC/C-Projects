
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    struct node_t{
        int data;
        node_t* next;
    };

        node_t* head = new node_t;

        head->data = 'a';
        head->next = NULL;

            head->next = new node_t;

            head->next->data = 'b';
            head->next->next = NULL;

node_t* temp = new node_t;
temp->data = 'c';
temp->next = head;


        temp = head;
        while(temp->next){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
        cout << endl;


    temp = head;
    while(head->next){
        head = head->next;
            delete temp;
    }
    delete head;
    head = NULL;
}