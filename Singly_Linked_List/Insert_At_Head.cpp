#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
class Linked_list{
public:
    node *head;

    Linked_list(){
        head = NULL;
    }
    //Create a new node with data = value and next = NULL
    node *Create_New_Node(int value){
        node *new_node = new node;
        new_node->data = value;
        new_node->next = NULL;
        return new_node;
    }
    //Insert new value at head
    void insert_at_head(int value){
        node *a = Create_New_Node(value);
        if(head == NULL){
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    void traverse(){
        node *a = head;
        while(a != NULL){
            cout << a->data<<" ";
            a = a->next;
        }
        cout << endl;
    }
    int search_dis_val(int val){
        //cout <<"Searching value is "<<val<< endl;
        node *a = head;
        int indx=0;
        while(a != NULL){
            if(a->data==val){
                return indx;
            }
            a = a->next;
            indx++;
        }
        //cout <<"No value is not found\n";
        return -1;
    }
    void search_val(){

    }
};
int main(){
    Linked_list l;
    l.insert_at_head(10);
    l.insert_at_head(30);
    l.insert_at_head(20);
    l.insert_at_head(30);

    l.traverse();
    cout <<"10 is found at "<<l.search_dis_val(10)<<endl;
    cout <<"5 is found at "<<l.search_dis_val(5)<<endl;
    cout <<"30 is found at "<<l.search_dis_val(30)<<endl;
    //l.search_val(30);
}
