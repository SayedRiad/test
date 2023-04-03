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
    cout << dl.getSize() <<"\n";
    dl.Traverse();
    dl.insert_at_head(10);
    cout << dl.getSize() <<"\n";
    dl.Traverse();
    dl.insert_at_head(5);
    cout << dl.getSize() <<"\n";
    dl.Traverse();
}
