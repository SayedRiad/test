#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    node *prev;
};
class DoublyLinkedList{
public:
    node *head;
    int sz;
    DoublyLinkedList(){
        head = NULL;
        sz = 0;
    }
    //Create a new node with the given data
    node *CreateNewNode(int data){
        node *newnode = new node;
        newnode -> data = data;
        newnode -> next = NULL;
        newnode -> prev = NULL;
        return newnode;
    }
    //Insert new node at head with the given data
    void insert_at_head(int data){
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        node *a = head;
        newnode -> next = a;
        a -> prev = newnode;
        head = newnode;
    }
    //Reverse a doubly linked list
    void reverse_dll(){
        if(head == NULL){
            return;
        }
        node *a = head;
        int cur_indx = 0;
        while(cur_indx != sz-1){
            a = a -> next;
            cur_indx++;
        }
        //Last node is in a
        node *b = head;
        while(b != NULL){
            swap(b->next,b->prev);
            b = b -> prev;
        }
        head = a;
    }
    void Traverse(){
        node *a = head;
        while(a != NULL){
            cout << a->data << " ";
            a = a -> next;
        }
        cout << "\n";
    }
    int getSize(){
        return sz;
    }
};
int main(){
    DoublyLinkedList dl;
    dl.insert_at_head(15);
    dl.insert_at_head(10);
    dl.insert_at_head(5);
    dl.Traverse();
    dl.reverse_dll();
    dl.Traverse();
}

