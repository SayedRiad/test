#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
class Linked_List{
public:
    node *head;
    int sz;
    Linked_List(){
        head = NULL;
        sz = 0;
    }
    node* create_new_node(int value){
        node *new_node = new node;
        new_node -> data = value;
        new_node -> next = NULL;
        return new_node;
    }
    void insert_at_head(int value){
        sz++;
        node *a = create_new_node(value);
        if(head==NULL){
            head = a;
            return;
        }
        a -> next = head;
        head = a;
    }
    void intsert_at_any_index(int idx, int value){
        if(idx < 0 || idx > sz){
            return;
        }
        else if(idx == 0){
            insert_at_head(value);
            return;
        }
        sz++;
        node *a = head;
        int curr_idx = 0;
        while(curr_idx != idx-1){
            a = a -> next;
            curr_idx++;
        }
        node* new_node = create_new_node(value);
        new_node -> next = a -> next;
        a -> next = new_node;
    }
    int getSize(){
        return sz;
    }
    void traverse(){
        node *a = head;
        while(a != NULL){
            cout << a->data << " ";
            a = a -> next;
        }
        cout << endl;
    }

};
int main(){
    Linked_List l;
    l.insert_at_head(30);
    l.traverse();
    l.insert_at_head(20);
    l.traverse();
    l.insert_at_head(10);
    l.traverse();
    l.intsert_at_any_index(1,15);
    l.traverse();
    l.intsert_at_any_index(3,25);
    l.traverse();
    l.intsert_at_any_index(0,5);
    l.traverse();
    cout << l.getSize();
}

