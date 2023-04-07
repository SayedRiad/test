#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 5;
class Stack{
public:

    int arr[MAX_SIZE];
    int stack_sz;

    Stack(){
        stack_sz=0;
    }

    void push(int val){
        if(stack_sz>=MAX_SIZE){
            cout <<"Stack is Full!\n";
        }
        arr[stack_sz] = val;
        stack_sz++;
    }

    void pop(){
        if(stack_sz==0){
            cout <<"Stack is Empty!\n";
            return;
        }
        arr[stack_sz-1] = 0;
        stack_sz--;
    }

    int top(){
        if(stack_sz==0){
            cout <<"Stack is Empty!\n";
            return -1;
        }
        return arr[stack_sz-1];
    }
    int getSIZE(){
        return stack_sz;
    }
};
int main()
{
    Stack st;
    st.push(3);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.push(4);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.push(5);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    /*st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;*/
    st.push(6);
    st.push(7);
    cout << st.getSIZE()<<" "<<st.top()<<endl;
    st.push(8);
}
