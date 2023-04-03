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
    node *CreateNewNode(int data){
        node *newnode = new node;
        newnode -> data = data;
        newnode -> next = NULL;
        newnode -> prev = NULL;
        return newnode;
    }
    void insert_at_tail(int data){
        node *newnode = CreateNewNode(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        node *a = head;
        while(a->next != NULL){
            a = a -> next;
        }
        a -> next = newnode;
        newnode -> prev = a;
    }
    void Traverse(){
        node *a = head;
        while(a != NULL){
            cout << a -> data << " ";
            a = a -> next;
        }
        cout << "\n";
    }
};
int main(){
    DoublyLinkedList dl;
    dl.insert_at_tail(10);
    dl.insert_at_tail(20);
    dl.insert_at_tail(30);
    dl.Traverse();
}
