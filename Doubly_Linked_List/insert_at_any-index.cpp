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
    void insert_at_anyindex(int index,int data){
        if(index > sz){
            return;
        }
        if(index == 0){
            insert_at_head(data);
            return;
        }
        node *newnode = CreateNewNode(data);
        node *a = head;
        int cur_indx = 0;
        while(cur_indx != index-1){
            a = a -> next;
            cur_indx++;
        }
        node *b = a -> next;
        newnode -> prev = a;
        newnode -> next = a -> next;
        b -> prev = newnode;
        a -> next = newnode;
        sz++;
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
    dl.insert_at_anyindex(2,19);
    dl.insert_at_anyindex(3,18);
    dl.insert_at_anyindex(4,20);
    dl.insert_at_anyindex(5,18);
    cout << dl.getSize() << endl;
    dl.Traverse();
}

