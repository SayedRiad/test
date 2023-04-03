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
    Linked_List(){
        head = NULL;
    }
    node* create_new_node(int value){
        node *new_node = new node;
        new_node -> data = value;
        new_node -> next = NULL;
        return new_node;
    }
    void inser_at_head(int value){
        node *a = create_new_node(value);
        if(head==NULL){
            head = a;
            return;
        }
        a -> next = head;
        head = a;
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
    l.inser_at_head(30);
    l.traverse();
    l.inser_at_head(20);
    l.traverse();
    l.inser_at_head(10);
    l.traverse();
}
