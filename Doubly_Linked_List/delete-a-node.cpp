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
    //Delete a node of given index
    void Delete(int index){
        if(index >= sz){
            cout << index << " dose not exist\n";
            return;
        }
        node *a = head;
        int cur_indx = 0;
        while(cur_indx != index){
            a = a -> next;
            cur_indx++;
        }
        node *b = a -> prev;
        node *c = a -> next;
        if(b != NULL){
            b -> next = c;
        }
        if(c != NULL){
            c -> prev = b;
        }
        sz--;
        delete a;
        if(index == 0){
            head = c;
        }
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
    dl.insert_at_head(20);
    dl.insert_at_head(15);
    dl.insert_at_head(10);
    dl.insert_at_head(5);
    dl.Traverse();
    cout << dl.getSize() << endl;
    dl.Delete(2);
    dl.Traverse();
    dl.Delete(0);
    dl.Traverse();
    dl.Delete(2);
    dl.Traverse();

    cout << dl.getSize() << endl;
}

